#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;
void shuffle(int c[3])
{
    int x,y;
    for(int i=0;i<5;i++)
    {
        x=rand()%3;
        y=rand()%3;
        swap(c[x],c[y]);
    }
}
int main()
{
    srand((unsigned) time(0));
    int c[3]={'J','Q','K'};
    cout<<"Shuffling the cards"<<"\n";
        shuffle(c);
        cout<<"\n";
    int guess;
    printf("Guess the position of the queen??\n");
    cin>>guess;
    if(c[guess-1]=='Q')
    {
        cout<<"YOU WON THE GAME!"<<"\n";
    }
    else{
        printf("The positions are: %c %c %c \n",c[0],c[1],c[2]);
        cout<<"YOU LOSE!!"<<"\n";
    }
return 0;
}
