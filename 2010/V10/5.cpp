#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], *cuvant;

    cin.getline(s, 100);

    cuvant=strtok(s, " ");

    while(cuvant!=NULL){
        for(int i=0; i<strlen(cuvant); i++)
            if(cuvant[i]=='.') strcpy(cuvant, "");

        cout<<cuvant<<" ";
        cuvant=strtok(NULL, " ");
    }

    return 0;
}
