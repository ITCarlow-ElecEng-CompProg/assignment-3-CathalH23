/** Standard Deviation
 *  Cathal Hogan
 *  C00184521
 *  02-10-17
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{   //Variable Declaration
    int i;
    double sum = 0, mean,product, values[10]={0};

    i=0;
    //For loop
    for(i=0;i<10;i++)
    {
        //Prompt the user to enter a value
        cout << "Enter Value:";
        cin  >> values[i];

        sum = sum + values[i];
    }

    mean = sum / 10;


    for (i = 0; i < 10; i++)
    {
        sum=sum+((values[i] - mean)*(values[i]-mean));
    }

	//Value for product
    product = sqrt(sum/10);
	//Display on Screen
    cout<< "Mean is =" << mean ;
    cout<< "\nProduct is =" << product;

    return 0;
}
