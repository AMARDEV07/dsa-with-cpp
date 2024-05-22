/* leetcode question   bestbuy and sell stock




question no 123.1;
approch    ist create array   buystock=[100000]
              then init ist index with buystock[0]=INT_max;
                then traverse loop 1ton
                now compare value of ist or send array means ist arr name prize
                or second array name buysotoc.
                comapre and fin min value
                buystock[i.]=min(buystocl[i-1],prixe[i-1]
                cout<<buystock)
                
                
                now  time to maxstockvalue
                ist inislised int maxvalue=0;
                then trevaerse loop
            0ton;
            now init current prixe=buystock[i]-prixe[i]
            maxstockvalue-max(max svalue,current prize)
            cout<<maxstockvalue */
            #include<iostream>
            using namespace std;


            void buysellstock( int *prize,int n){
                int bestbuy[100000];//create arry
                bestbuy[0]=INT8_MAX;

                  for(int i=1;i<n;i++){
                    bestbuy[i]=min(bestbuy[i-1],prize[i-1]);//compare both array;

                     cout<<bestbuy[i];//print i;
                  }
                  int maxprofit=0;//now init profit
                  for(int i=0;i<n;i++){
                    int currentprofit=(prize[i]-bestbuy[i]);//compare currnet profit by prize-bestbuy
                     maxprofit=max(maxprofit,currentprofit);//comapre max value
                  }
                  cout<<"max value is"<<maxprofit;
           
                


            }
             int main(){
                int prize[6]={7,1,5,3,6,4};
                int n=sizeof(prize)/sizeof(int);
                buysellstock(prize,n);

            return 0;
            }

            
            