#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstring>
using namespace std;
int gen1(int l)
{
    if (l==1){return rand()%9;}
    else if(l==2){return rand()%99;}
    else {return  rand()%999;}

}
int gen2(int l)
{
    if (l==1){return rand()%9;}
    else if(l==2){return rand()%99;}
    else {return  rand()%999;}
}
int main()
{
    int p=0,i,t,k,ans,result,r,l;
    char c,name[100];
    srand(time(0));
    while(1)
    {
    cout<<"Enter your name kid"<<endl;
    //cin.ignore();
   cin.getline(name,100);
     cout<<"Great "<<name<<" lets begin"<<endl;
cout<<"Enter Difficulty Level\n"<<"Press 1 for easy\n"<<"Press 2 for Medium\n"<<"Press 3 for Hard\n"<<endl;
cin>>l;
     t=gen1(l);
     k=gen2(l);
    for(i=0;i<10;i++)
    {
        cout<<"How much is "<<k <<" times "<<t<<" ?"<<endl;
        cin >> ans;
        if(ans == t*k)
        {
            t=gen1(l);
            k=gen2(l);
            r=rand()%4;
            p++;
            switch(r)
            {

                case 1:
                cout<<"Very Good!"<<endl;
                break;
                case 2:
                cout<<"Excellent!"<<endl;
                break;
                case 3:
                cout<<"Nice Work!"<<endl;
                break;
                case 4:
                cout<<"Keep up the good work"<<endl;
                break;
                default:
                break;
            }
        }
        else if (ans!= t*k)
        {
             r=rand()%4;
             p--;
            switch(r)
            {

                case 1:
                cout<<"No.please try again"<<endl;
                break;
                case 2:
                cout<<"Wrong.Try once more"<<endl;
                break;
                case 3:
                cout<<"Don't give up"<<endl;
                break;
                case 4:
                cout<<"No. Keep trying"<<endl;
                break;
                default:
                break;
            }
        }

    }
     result=(p*10);
    cout<<"Your total score is "<<result<<endl;

    if(result>75)
    {
        cout<<"Congratulations you are ready to go the next level"<<endl;
    }
    else
    cout<<"Please ask your teacher for extra help"<<endl;
    cout<<"Do you want to continue\n"<<"Enter Y or N"<<endl;
    cin >> c;
    cin.ignore();
    if(c=='n' || c=='N')
    {
        cout<<"Thank you"<<endl;
        break;
    }
    }
    return 0;
}
