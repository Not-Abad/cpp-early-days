
//Librerias
 #include <stdio.h> 
 
 char *mayus(){
 	return "12345";
 }
 char *abc()
 {
 	return "hola";
 }
 
 int main()
 {
 
 	char *n={abc()};
 	char *m[2]={abc(),mayus()};
 	
 	printf("%s",m[1]);
	//printf("%i",abc());
	
 	//printf("%i",n);
 	return 1;
 }
