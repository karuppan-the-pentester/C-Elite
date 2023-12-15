#include "iostream"
using namespace std;

int main(){
    cout<<"The adam Numbers are: 0";
    for (int j = 0; j < 101; ++j) {
        int i = j;
        int reversed = 0,reversed2=0;
        int remainder;
        while (i > 0) {
            remainder = i % 10;
            reversed = reversed * 10 + remainder;
            i = i / 10;
        }

        int square = j*j;
        while (square > 0) {
            remainder = square % 10;
            reversed2 = reversed2 * 10 + remainder;
            square = square / 10;
        }


//        cout<<"The adam Numbers are: ";

        if(reversed*reversed == reversed2 )
        {
            if(j%10==0 ){
                continue;
            }
//            cout<<j<<" ";
            cout << endl << "j=" << j << ", ReversedOfJ=" << reversed << ", SquareOfJ=" << j * j << ", SquareOfReversedJ="<< reversed2 ;
        }

    }

}
