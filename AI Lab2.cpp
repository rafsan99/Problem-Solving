#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int t,n,i,j,inx,k,r,right,down,d,left,l,up,u,res;

    string in,g;

    for(i=0;i<9;i++){
        cin>>in[i];
        if(in[i]=='x'||in[i]=='X'){
            inx=i;
        }
    }

    for(i=0;i<9;i++){
        cin>>g[i];
    }

    cout<<"\n";

    for(i=0;i<50;i++){
            r=0;
            right=0;
            d=0;
            down=0;
            l=0;
            left=0;
            u=0;
            up=0;
            res=0;
            for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        res++;
                    }
                }

        if(res==0){
            break;
        }
        else if(res!=0){
            if(inx==0){
                swap(in[0],in[1]);

                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }
                right=i+r;
                swap(in[1],in[0]);

                swap(in[0],in[3]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[3],in[0]);

                if(std::min(right,down)==down){
                    swap(in[0],in[3]);
                    inx=3;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(right,down)==right){
                    swap(in[0],in[1]);
                    inx=1;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==1){
                swap(in[1],in[0]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[0],in[1]);

                swap(in[1],in[2]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }

                right=i+r;
                swap(in[2],in[1]);

                swap(in[1],in[4]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[4],in[1]);

                if(std::min(std::min(left,right),down)==down){
                    swap(in[1],in[4]);
                    inx=4;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(left,right),down)==right){
                    swap(in[1],in[2]);
                    inx=2;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(left,right),down)==left){
                    swap(in[1],in[0]);
                    inx=0;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }


            else if(inx==2){
                swap(in[2],in[1]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[1],in[2]);

                swap(in[2],in[5]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[5],in[2]);

                if(std::min(left,down)==down){
                    swap(in[2],in[5]);
                    inx=5;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(left,down)==left){
                    swap(in[2],in[1]);
                    inx=1;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }


            else if(inx==3){
                swap(in[3],in[0]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[0],in[3]);

                swap(in[3],in[4]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }

                right=i+r;
                swap(in[4],in[3]);

                swap(in[3],in[6]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[6],in[3]);

                 if(std::min(std::min(up,right),down)==down){
                    swap(in[3],in[6]);
                    inx=6;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,right),down)==right){
                    swap(in[3],in[4]);
                    inx=4;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,right),down)==up){
                    swap(in[3],in[0]);
                    inx=0;
                                        cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==4){
                swap(in[4],in[1]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[1],in[4]);

                swap(in[4],in[5]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }
                right=i+r;
                swap(in[5],in[4]);

                swap(in[4],in[7]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[7],in[4]);

                swap(in[4],in[3]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[3],in[4]);

                if(std::min(std::min(up,right),std::min(down,left))==down){
                    swap(in[4],in[7]);
                    inx=7;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,right),std::min(down,left))==right){
                    swap(in[4],in[5]);
                    inx=5;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,right),std::min(down,left))==left){
                    swap(in[4],in[3]);
                    inx=3;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,right),std::min(down,left))==up){
                    swap(in[4],in[1]);
                    inx=1;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==5){
                swap(in[5],in[2]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[2],in[5]);

                swap(in[5],in[8]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        d++;
                    }
                }
                down=i+d;
                swap(in[8],in[5]);

                swap(in[5],in[4]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[4],in[5]);

                if(std::min(std::min(up,left),down)==down){
                    swap(in[5],in[8]);
                    inx=9;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,left),down)==left){
                    swap(in[5],in[4]);
                    inx=4;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,left),down)==up){
                    swap(in[5],in[2]);
                    inx=2;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==6){
                swap(in[6],in[3]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[3],in[6]);

                swap(in[6],in[7]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }
                right=i+r;
                swap(in[7],in[6]);

                 if(std::min(up,right)==right){
                    swap(in[6],in[7]);
                    inx=7;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else{
                    swap(in[6],in[3]);
                    inx=3;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==7){
                swap(in[7],in[4]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[4],in[7]);

                swap(in[7],in[8]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        r++;
                    }
                }
                right=i+r;
                swap(in[8],in[7]);


                swap(in[7],in[6]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[6],in[7]);

                if(std::min(std::min(up,left),right)==right){
                    swap(in[7],in[8]);
                    inx=8;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,left),right)==left){
                    swap(in[7],in[6]);
                    inx=6;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(std::min(up,left),right)==up){
                    swap(in[7],in[4]);
                    inx=4;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }



            else if(inx==8){
                swap(in[8],in[5]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        u++;
                    }
                }
                up=i+u;
                swap(in[5],in[8]);

                swap(in[8],in[7]);
                for(k=0;k<9;k++){
                    if(in[k]!=g[k]){
                        l++;
                    }
                }
                left=i+l;
                swap(in[7],in[8]);

                if(std::min(up,left)==left){
                    swap(in[8],in[7]);
                    inx=7;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
                else if(std::min(up,left)==up){
                    swap(in[8],in[5]);
                    inx=5;
                    cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<"\n";
                    cout<<in[3]<<" "<<in[4]<<" "<<in[5]<<" "<<"\n";
                    cout<<in[6]<<" "<<in[7]<<" "<<in[8]<<" "<<"\n";
                    cout<<"\n";
                }
            }
        }
    }

}

