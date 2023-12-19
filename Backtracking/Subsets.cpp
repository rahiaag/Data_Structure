#include<iostream>
#include <vector>
using namespace std;

void subset(char *in,char *out,int i,int j)
{
    //Base Case
    if (in[i]=='\0'){                            // in[i] is Null Means that the input is Null then
        out[j]='\0';                            // out[j] means output will be Null and
        if (out[0]=='\0'){
            cout<<"NULL";
        }                             
        cout<<out<<endl;                        // out[j] will be printed as Null
        return;
    }
    //rec case
    //Include the ith letter
    out[j]=in[i];
    subset(in,out,i+1,j+1);

    //Exclude the ith letter
    subset(in,out,i+1,j);
}


int main()
{
char in[100];
char out[100];
cin>>in;
subset(in,out,0,0);

return 0;
}
