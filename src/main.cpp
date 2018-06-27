#include <stdio.h>
#include <iostream>


#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/x509v3.h>


#define MAX_CERT_LEN 20000

int main() {

	
	OpenSSL_add_all_algorithms();
	char certDer[MAX_CERT_LEN];
	
	FILE *fp = 0;
	long len;

	if (fp = fopen("../certificadoExemplo/cert.der", "rb")) {
		len = fread(certDer, 1, MAX_CERT_LEN - 1, fp);
		certDer[len] = '\0';
	}

	const unsigned char *buf = (const unsigned char *)certDer;
	
	X509* certificado = d2i_X509(NULL, &buf,len);
	X509_NAME* subject = X509_get_subject_name(certificado);	
	if (certificado != NULL)
	{
		const char *line = X509_NAME_oneline(subject, 0, 0);
		printf("Subject: %s\n", line);
	}
	

	fclose(fp);
	return 0;
}

