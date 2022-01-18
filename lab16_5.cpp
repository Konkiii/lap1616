#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
    int e[4];
    int f[4];
    int x = 0,p = 0,q = 0,r = 0;
    e[0] = *a,e[1] = *b,e[2] = *c,e[3] = *d;

    do{
		x = rand()%4;
	}while(e[x] == 0);
    f[0] = e[x];
    e[x] = 0;
	

    do{
        p = rand()%4;
    }while(e[p] == 0);
    f[1] = e[p];
    e[p] = 0;

    do{
        q = rand()%4;
    }while(e[q] == 0);
    f[2] = e[q];
    e[q] = 0;

    do{
        r = rand()%4;
    }while(e[r] == 0);
    f[3] = e[r];

    *a = f[3],*b = f[2],*c = f[1],*d = f[0];
}