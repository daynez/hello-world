```

#include <cstdlib>
 #include <cstdio> 
#include <iostream> 
#include <ctime> 
using namespace std; 
int main() { 
Multi:
    int enters = 'y'; 
    char enter;
    
        while(enters == 'y') {
   int srand(time(NULL)); 
        int rnum1 = rand()%12+1; 
        int rnum2 = rand()%12+1;
         int bingo; 
        bingo = rnum1 * rnum2;
         cout << rnum1 << " times " << rnum2 << " equals: "; 
        while(enters != 'q') { 
            cin >> enters; 
            if(enters == bingo) {
                 cout << "Congratulations! "<< endl;
             enters = 'q'; } 
            else { cout << "Sorry, try again "<<endl; } } 
}
        d:   cout << "Try another? y/n \n Or change to +,-,/  "<<endl;
       
      
      cin >> enter;
       switch (enter){
    case 'y':
    goto Multi;
        
        case 'n':
        return 0;

        default:
 cout <<" Not a valid response ";
        goto d;
        

}


 } 

```
