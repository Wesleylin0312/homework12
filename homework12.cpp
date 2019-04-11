#include <iostream>
using namespace std;

int main()
{
	int v=10;
	cout<<endl;
    cout<<"­Ë¤T¨¤§Î"<<endl;
    for(int i=1;i<=v;i++){
        for(int w=1;w<i;w++){
            cout<<" ";
        }

        for(int w=v;w>=i;w--){
            cout<<"*";
        }

        cout<<endl;
    }
    system("pause");
    return 0;
	
}
