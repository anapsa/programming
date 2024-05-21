#include <bits/stdc++.h>
using namespace std;
int main()
{
    double w, wao = -1, wbo= -1, wap = -1, wbp =-1; 
    double ax, ay, bx, by, px, py; 
    double ox = 0.0, oy = 0.0; 
    char o, p; 
    int test; 
    cin >> test; 
    cin >> px >> py >> ax >> ay >> bx >> by;
    while (test > 0) {
        test--;
        if(sqrt(pow(bx-ox,2)+ pow(by-oy, 2))> sqrt(pow(ax-ox,2)+ pow(ay-oy, 2))) {
            wao = sqrt(pow(ax-ox,2)+ pow(ay-oy, 2));
            o = 'a';
        } else {
            wbo = sqrt(pow(bx-ox,2)+ pow(by-oy, 2));
            o = 'b';
        }
        if(sqrt(pow(bx-px,2)+ pow(by-py, 2))> sqrt(pow(ax-px,2)+ pow(ay-py, 2))) {
            wap = sqrt(pow(ax-px,2)+ pow(ay-py, 2));
            p = 'a';
        } else {
            wbp = sqrt(pow(bx-px,2)+ pow(by-py, 2));
            p = 'b';
        }
        if(o == p) {
            if(p == 'b'){
                if(wbp > wbo) {
                    w = wbp; 
                } else {
                    w = wbo;
                }
            } else {
                if(wap > wao) {
                    w = wap; 
                } else {
                    w = wao;
                }
            }
        } else if(wao != -1) {
            if(wao + wbp >= sqrt(pow(bx-ax,2)+ pow(by-ay, 2))){
                if(wao > wbp) {
                    w = wao; 
                } else {
                    w = wbp;
                }
            } else {
                if(sqrt(pow(bx-ax,2)+ pow(by-ay, 2))/2 < wao) {
                    w = wao;
                } else if(sqrt(pow(bx-ax,2)+ pow(by-ay, 2))/2 < wbp) {
                    w = wbp;
                } else {
                     w = (sqrt(pow(bx-ax,2)+ pow(by-ay, 2)))/2; 
                }
            }
        } else {
            if(wbo + wap >= sqrt(pow(bx-ax,2)+ pow(by-ay, 2))){
                if(wbo > wap) {
                    w = wbo; 
                } else {
                    w = wap;
                }
            } else {
                if((sqrt(pow(bx-ax,2)+ pow(by-ay, 2)))/2 < wbo) {
                    w = wbo; 
                } else if((sqrt(pow(bx-ax,2)+ pow(by-ay, 2)))/2 < wap) {
                    w = wap;
                } else { 
                    w = (sqrt(pow(bx-ax,2)+ pow(by-ay, 2)))/2; 
                }
            }
        }
        printf("%f\n", w); 
        wao = -1; wbo= -1; wap = -1; wbp =-1;
        w = 0; 
        cin >> px >> py >> ax >> ay >> bx >> by;
    }
    
    return 0;
}
