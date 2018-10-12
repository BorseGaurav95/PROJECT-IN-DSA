#include<iostream>
using namespace std;
# define MAX 10
class searching
 {  int c,flag,	count;
     int a[MAX];

      public:
   
           
            void sear_ele()
               { int b=count;
                    cout<<"Enter Element do you want to search :";
                     cin>>c;
                       flag=0;    
                   for(int i=0;i<b;i++)
                      { 
                               if(a[i]==c)                        
                                 {
                                    flag=1;
                                     break;
                                 }
                                else
                           {
                               flag=0;
                           }

                      }   
                    if(flag==1)
                      {
                         cout<<"!!!!!!!!!!!!!!!!!!Element found!!!!!!!!!!!!!!!!";
                     }
                      else
                        cout<<"!!!!!!!!!Element Not found!!!!!!!!!!!!!!!!!!!!!!";

                 }  
         


            void bianry()
                {
                    int low,high,mid;
                    low=0;
                    high=count;
                    cout<<"\nEnter Element do you want to search :";
                     cin>>c;
                    flag=0;
                   while(low<=high) 
                    {
                         mid=(low+high)/2;
                          if(a[mid]==c)
                              {
                                 flag=1;
                                   break;
                                  
                              }
                           else
                             {
                                if(c<a[mid])
                                  {
                                      high=mid-1;
                                   }             
                                 else
                                  {
                                           low=mid+1;

                                  }                     
                             }


                   } 
                      
                    if(flag==1)               
                     {
                        cout<<"\n!!!!!!!!!!!!!!!!!!Element found!!!!!!!!!!!!!!!!\n";
                        }
                     else
                      {
                        cout<<"\n!!!!!!!!!Element Not found!!!!!!!!!!!!!!!!!!!!!!";

                                }   


                }
                                   
                     
      



            void sort()
               {    int p=count;

                      for(int i=1;i<p;i++)
               {
                         for(int j=0;j<p;j++)
                              { 
                                if(a[j]>a[j+1])  
                                 {
                                    int temp;
                                    temp=a[j];
                                     a[j]=a[j+1];
                                     a[j+1]=temp;     

                                 }
                 }
                  


                         }




              }       
     
         void display()
             {
                     cout<<"\nElements in  sorted Way are:"; 
                     for(int i=0;i<count;i++) 
                    {
                          cout<<a[i]<<" ";
                                
                     }
                     



          }
         void get()
           {
                 cout<<"Enter Number of element :";
                 cin>>count;

                cout<<"Enter element in array: \n";

                  for(int i=0;i<count;i++) 
                    {
                          cout<<i+1<<"]";cin>>a[i];
                                
                     }
                     


         } 
   

};


int main()  {
       int f,l;
      searching s;
do{
          cout<<"\n1.To Enter Details :";
          cout<<"\n2.DISPLAY ELEMENT IN SORTED WAY; :"; 
          cout<<"\n3.SEQUENCIAL SEARCH  :"; 
          cout<<"\n4.BINARY SEARCH :";
          cout<<"\nEnter Your Choise:";
           cin>>f;    
    switch(f)   
   {   case 1:  s.get();break;
          case 2:s.sort();  s.display(); break;
          case 3: s.sort();  s.sear_ele(); ;break;
          case 4:s.sort();  s.bianry(); ; break; 
          default:cout<<"Invalid Input:";break;    
         
          
          

} cout<<"\n'1' to continue:";
 cin>>l;
}while(l==1);


}
