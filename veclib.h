#ifndef HEADER_FILE
#define HEADER_FILE
//the entire header file
#define dim 4
typedef float vector[dim];
//functions prototype

//function to print a vector
void print(vector vecA)

//function to add two vectors
void add(vector vecA, vector vecB, vector vecC);

//function to find the elementwise product of two vectors
void elementp(vector vecA, vector vecB, vector vecC);

//function to find the difference of two products
void difference(vector vecA, vector vecB, vector vecC);

//function to find the dot product of two vectors
void dot(vector vecA, vector vecB, vector vecC);

//function to find the angle between two vectors
void angle(vector vecA, vector vecB, vector vecC);

void print(vector vecA){
	printf("[");
	for(int i=0;i<dim;i++)
		printf("%f ",vecA[i]);
	printf("]\n");
}
void input(vector vecA){
	printf("enter all the four dimensions or elements of the given vector:");
	for(int i=0;i<dim;i++)
		scanf("%f ",&vecA[i]);
}


#endif