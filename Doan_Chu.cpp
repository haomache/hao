#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>
#include <vector>
#include <time.h>
int main(){
    int a[11];
    ifstream tudien;
    tudien.open("data.txt");
    string nuoc;
    vector<string>tu1;
    while(tudien>>nuoc){
        tu1.push_back(nuoc);
    }
    
    tudien.close();
    srand(time(0));
    int index = rand() % 10;
    string tu=tu1[index];
    cout<<"------CHUONG TRINH DOAN CHU-------\n";
    
    string b;
    cout<<"GOI Y: DAY LA MOI NUOC O ASEAN CO "<<tu.size()<<" CHU CAI"<<endl;
    for(int i=0; i<tu.length(); i++){
        b=b+"_";
    }
    cout<<b<<endl;
    int luotdoan=10;
    char doan;
    vector<char>doansai;
    int dem1=0;
    int dem2=0;
    while(luotdoan>0){
        int dem=0;
        cout<<"BAN CON "<<luotdoan<<" LUOT DOAN"<<endl;
        cout<<"MOI BAN DOAN CHU: ";
        cin>>doan;
        for(int i=0; i<tu.length(); i++){
            if(doan==tu[i]){
                b[i]=doan;
                dem++;
            }
        }
        if(dem!=0){
            cout<<"CO "<<dem<<" CHU '"<<doan<<"'"<<endl;
        }
        else{
            cout<<"KHONG CO CHU '"<<doan<<"' "<<"NAO"<<endl;
            luotdoan--;
            doansai.push_back(doan);
            dem2++;
        }
        cout<<b<<endl;
        if(b==tu){
            cout<<"BAN WIN";
            break;
        }
        if(dem2!=0){
            cout<<"NHUNG TU DA DOAN SAI: ";
            for(int i=0; i<doansai.size(); i++){
                cout<<"'"<<doansai[i]<<"'";
            }
            cout<<"\n";
            cout<<"------------------------------------------\n";
        }
        
    }
    if(b!=tu)
        cout<<"BAN LOSE";
    return 0;
}