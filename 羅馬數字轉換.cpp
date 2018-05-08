#include <iostream>
#include <math.h>

using namespace std;

int RomatoNums(string a){
	int ans=0;
	for(int i=0;i<a.length();i++)
		{
			switch(a[i])
				{
					case 'I':
						ans=ans+1;
					break;
										
					case 'V':
						ans=ans+5;
						if(a[i-1]=='I')
						ans=ans-2;
					break;
						
					case 'X':
						ans=ans+10;
						if(a[i-1]=='I')
						ans=ans-2;
					break;
						
					case 'L':
						ans=ans+50;
						if(a[i-1]=='X')
						ans=ans-20;
					break;
						
					case 'C':
						ans=ans+100;
						if(a[i-1]=='X')
						ans=ans-20;					
					break;
					
					case 'D':
						ans=ans+500;
						if(a[i-1]=='C')
						ans=ans-200;
					break;					
					
					case 'M':
						ans=ans+1000;
						if(a[i-1]=='C')
						ans=ans-200;
					break;
					
				}
		}
return ans;	
	
	
}


string NumstoRoma(int i){
{
    string output = "";

    if( i == 0 )
        return (output = "ZERO");
    
    int temp;
    
    while( i > 0 )
    {
        if( i >= 1000 )
        {
            i -= 1000;
            output += "M";
        }
        else if( i >= 900 )
        {
            i -= 900;
            output += "CM";
        }
        else if( i >= 500 )
        {
            i -= 500;
            output += "D";
        }
        else if( i >= 400 )
        {
            i -= 400;
            output += "CD";
        } 
        else if( i >= 100 )
        {
            i -= 100;
            output += "C";
        }
        else if( i >= 90 )
        {
            i -= 90;
            output += "XC";
        } 
        else if( i >= 50 )
        {
            i -= 50;
            output += "L";
        }
        else if( i >= 40 )
        {
            i -= 40;
            output += "XL";
        }
        else if( i >= 10 )
        {
            i -= 10;
            output += "X";
        }
        else if( i >= 9 )
        {
            i -= 9;
            output += "IX";
        }
        else if( i >= 5 )
        {
            i -= 5;
            output += "V";
        }
        else if( i >= 4 )
        {
            i -= 4;
            output += "IV";
        }
        else
        {
            i -= 1;
            output += "I";
        }
    }
    return output;
}	
	
	
}


int main(){
	string cina,cinb;
	
	while(cin>>cina>>cinb)
		{
			cout<<NumstoRoma(abs(RomatoNums(cina)-RomatoNums(cinb)))<<endl;	
			
			
		}
	return 0;
	
	
	
	
}
