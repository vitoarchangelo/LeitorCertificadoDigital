#include <stdio.h>
#include <iostream>
#include <string>

#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/x509v3.h>

//valor maximo permitido para um certificado
#define MAX_CERT_LEN 20000

int main() {

	
	OpenSSL_add_all_algorithms();

	char certificadoDados[MAX_CERT_LEN];//char que contém os dados do certificado
	
	//entrada do caminho do arquivo
	std::string fileName;
	std::cout << "Informe o caminho do arquivo: ";
	std::getline (std::cin, fileName);
	
	FILE *certificadoArquivo = 0;//ponteiro para o arquivo
	long len;//tamanho de certificadoDados

	//ler do arquivo e armazenar na memória do programa (certificadoDados)
	if (certificadoArquivo = fopen(fileName.c_str(), "rb")) {
		len = fread(certificadoDados, 1, MAX_CERT_LEN - 1, certificadoArquivo);
		certificadoDados[len] = '\0';
	}

	

	const unsigned char *dadosCertificado = (const unsigned char *)certificadoDados;
	
	//ler certificado da memória
	X509* certificado = d2i_X509(NULL, &dadosCertificado,len);

	//obter estrutura com informações do titular do certificado
	X509_NAME* subject = X509_get_subject_name(certificado);	
	if (certificado != NULL)
	{
		//obter representação ASCII de uma estrutura X509_NAME
		const char *line = X509_NAME_oneline(subject, 0, 0);
		printf("Subject: %s\n", line);
	}
	
	//limpar a memória
	X509_free(certificado);
	fclose(certificadoArquivo);

	return 0;
}

