#include <iostream>
using namespace std;


namespace librarymanagement{
    struct book{
        string title;
        string author;
        int isbn;
        
    }b;
}
using namespace librarymanagement;
namespace userinterface{
    void displaybookinfo(book b){
        cout<<"TITLE : "<<b.title<<endl<<"AUTHOR : "<<b.author<<endl<<"ISBN : "<<b.isbn<<endl;
    }
}
namespace utilities{
    class date{
        int day;
        int month;
        int year;
        public:
        date(int a,int b,int c){
            day=a;
            month=b;
            year=c;
        }
        void isvaliddate(date d){
            if (d.year>=1900&&d.year<=2099&&d.month>=1&&d.month<=12){
                if ((d.month==1||d.month==3||d.month==5||d.month==7||d.month== 8||d.month==10||d.month==12) && (d.day>=1&&d.day<=31))
                {
                    cout<<"valid"<<endl;
                    return;
                }
                else if((d.month==4||d.month==6||d.month==9||d.month==11) && (d.day>=1&&d.day<=30))
                {
                    cout<<"valid"<<endl;
                    return;
                }
                else if(d.month==2){
                    if (year % 4 == 0) {
                        if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)) {
                            if(d.day<=29){
                                 cout<<"valid"<<endl;
                                 return;
                            }
                            else{
                                 cout<<"not valid"<<endl;
                                 return;
                            }
                        }
                        else if(d.day<=28){
                            cout<<"valid"<<endl;
                            return;
                        }
                    }
                        
                }
            }
            cout<<"not valid"<<endl;
            return;
        }
};}
using namespace userinterface;
using namespace utilities;
int main(){
    b.title="lion king";
    b.author="anaswara";
    b.isbn=1234;
    displaybookinfo(b);
    date d1(29,2,2004);
    d1.isvaliddate(d1);
    
    date d2(29,2,2003);
    d2.isvaliddate(d2);
    
    date d3(31,10,2023);
    d3.isvaliddate(d3);
    
    date d4(30,9,2023);
    d4.isvaliddate(d4);
    
    date d5(31,9,2023);
    d5.isvaliddate(d5);
    return 0;
}
