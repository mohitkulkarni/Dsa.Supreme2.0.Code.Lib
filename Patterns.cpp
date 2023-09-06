#include<iostream>
using namespace std;

void hollowHalfPyramid(int n);
void fullPyraidFirst(int n);
void fullHollowPyraid(int n);
void invertedFullPyramid(int n);
void inversButterfly(int n);
void holowNumericHalfPyramid(int n);
void pyramids(int n);
void diamond(int n);
void fancyPatterFirst(int n);
void fancyPatterSecond(int n);
void fancyPatterThird(int n);
void fancyPatterFourth(int n);
void floyedTrianagle(int n);
void butterfly(int n);

int main()
{
  fullPyraidFirst(8);
  cout <<"_______________________"<<endl;
  fullHollowPyraid(5);
  cout <<"_______________________"<<endl;
  invertedFullPyramid(5);
  cout <<"_______________________"<<endl;
  holowNumericHalfPyramid(7);
  cout <<"_______________________"<<endl;
  diamond(5);
  cout <<"_______________________"<<endl;
  fancyPatterFirst(4);
  cout <<"_______________________"<<endl;
  fancyPatterSecond(5);
  cout <<"_______________________"<<endl;
  fancyPatterThird(5);
  cout <<"_______________________"<<endl;
  fancyPatterFourth(4);
  cout <<"_______________________"<<endl;
  floyedTrianagle(6);
  cout <<"_______________________"<<endl;
  butterfly(4);
  cout <<"_______________________"<<endl;
  pyramids(5);
  cout <<"_______________________"<<endl;
  inversButterfly(7);  
  cout <<"_______________________"<<endl;
  hollowHalfPyramid(5);
  cout <<"_______________________"<<endl;
  return 0;
}

void butterfly(int n){

/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row+1; col++)
    {
      cout<<"*";
    }
    for (int col = 0; col < 2 * n - 2 * row - 2; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col < row +1 ; col++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  //Inverse code
    for (int row = 0; row < n; row++)
    {
    for (int col = 0; col < n - row; col++)
    {
      cout<<"*";
    }
    for (int col = 0; col <  2 * row; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col <n - row ; col++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}

void floyedTrianagle(int n){
/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

  int counter = 1;
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row + 1; col++)
    {
      cout<<counter << " ";
      counter++;
    }
    cout<<endl;
  }
}

void fancyPatterFourth(int n){
/*
*
**
***
****
***
**
*
*/
for (int row = 0; row < n; row++)
{
  for (int col = 0; col < row+1; col++)
  {
    cout<<"*";
  }
  cout<<endl;
}
  for (int row = 0; row < n -1 ; row++)
  {
    for (int col = 0; col < n- row - 1; col++)
    {
      cout<<"*";
    }
   cout<<endl; 
  }
}

void fancyPatterThird(int n){

/*
**********1**********
*********2*2*********
********3*3*3********
*******4*4*4*4*******
******5*5*5*5*5******
*/


  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < 2 * n - row; col++)
    {
      cout<<"*";
    }
    for (int col = 0; col < 2 * row + 1; col++)
    {
      if (col %2 != 0)
      {
        cout<<"*";
      }else{
        cout<<row+1;
      }
    }
    for (int col = 0; col < 2 * n - row; col++)
    {
      cout<<"*";
    }

    cout<<endl;
  } 
}

void fancyPatterSecond(int n){

/*
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
  for (int row = 0; row < n; row++)
  {
    char ch;
    for (int col = 0; col < row + 1 ; col++)
    {
      int num  = col + 1; 
      ch = num + 'A' - 1; 
      cout<< ch;
    }
    for (int col = 0; col < row; col++)
    {
      char temp = ch - (col+1);
     cout<<temp;
    }
    cout<<endl;
  }


  /*
1
12
1 3
1  4
12345
  */

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row+ 1; col++)
    {
      if (col == row)
      {
        cout<<row+1;
      }
      else if (col == 0)      
      {
        cout<<1;
      }else if (row == n-1){
        cout<<col+1;
      }
      else{
        cout<<" ";
      }
    }
  cout<<endl;    
  }
  
  /*
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
  */
  for (int  row = 0; row < n; row++)
  {
    for (int col = 0; col < 2 * row + 1; col++)
    {
      if (col%2 !=0 )
      {
        cout<<"*";
      }
      else{
         cout<<row+1;
      }
      
     
    }
    cout<<endl;
  }
  
}

void fancyPatterFirst(int n){
  
  /*
**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****
  
  */

  for (int row = 0; row < n; row++)
  {
    for (int  col = 0; col < n-row; col++)
    {
      cout<<"*";
    }

  for (int col = 0; col < 2 * row +1; col++)
  {
    cout<<" ";
  }

  for (int i = 0; i < n-row; i++)
  {
    cout<<"*";
  }
    cout<<endl;
  }

  for (int row = 0; row < n; row++)
  {
    for (int  col = 0; col <row+1; col++)
    {
      cout<<"*";
    }

  for (int col = 0; col < 2 * n - 2 * row - 1; col++)
  {
    cout<<" ";
  }

  for (int i = 0; i <row + 1; i++)
  {
    cout<<"*";
  }
    cout<<endl;
  }


}

void diamond(int n){

/*
    * 
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *

*/
for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n-row-1; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col < row+1; col++)
    {
      if (col == 0 || col == row)
      {
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col < n - row; col++)
    {
      if (col == 0 || col == n - row - 1)
      {
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }

  /*
  
   * 
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *
  */
  n = n/2;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n-row-1; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col < row+1; col++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

   for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row; col++)
    {
      cout<<" ";
    }
    for (int col = 0; col <n -row; col++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  
}

void pyramids(int n){

/*
*       * 
 *     *
  *   *
   * *
    *
*/

for (int row = 0; row < n; row++)
{
  for (int col = 0; col < row; col++)
  {
    cout<<" ";
  }
  for (int col = 0; col < n - row; col++)
  {
    if (col == 0 || col == (n- row) - 1)
    {
      cout<<"* ";
    }
    else{
      cout<<"  ";
    }
    
  }
  cout<<endl;
}


  /*
* * * * * 
 * * * *
  * * *
   * *
    *
  */

for (int row = 0; row < n; row++)
{
  for (int col = 0; col < row; col++)
  {
    cout<<" ";
  }
  for (int col = 0; col < n - row; col++)
  {
    cout<<"* ";
  }
  cout<<endl;
}

  /*
    * 
   * *
  *   *
 *     *
*       *
  */

for (int row = 0; row < n; row++)
{
  for (int i = 0; i < n - row - 1; i++)
  {
    cout<<" ";
  }
  for (int  col = 0; col < row + 1; col++)
  {
    if (col == 0 || col == row )
    {
      cout<<"* ";
    }else{
      cout<<"  ";
    }
  }
  cout<<endl;
}




/*
   * 
  * *
 * * *
* * * *
*/

  for (int  row = 0; row < n; row++)
  {
    for (int col = 0; col < n - row - 1; col++)
    {
      cout<<" ";
    }
    

    for (int col = 0; col < row+1; col++)
    {
      cout <<"* ";   
    }
    cout<<endl;
  }
}

void holowNumericHalfPyramid(int n){
  
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n * 2 -1; col++)
    {
      if (row == n-1)
        {
          if (col%2!=0)   
          {
            cout << "  ";
          }else{
            cout<< col<<" ";
          } 
        }
      else if (col == n-(row+1) || col == n+(row-1))
      {
        if (col >= n)
        {
         cout << row+1 << " ";
        }
        else
        {
          cout <<"1 ";
        }
      }     
      else 
      {
        cout<<"  ";
      }
    }
    cout << endl;
  }
}

void inversButterfly(int n){

  /*
* * * * * * * 
  *       *
    *   *
      *
    *   *
  *       *
* * * * * * *

  */


  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      if (row == 0 || row == n-1 || (row == (n-1)/2 && col == (n-1)/2) || col == row || col == n - (row+1))
      {
        cout << "* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}

void invertedFullPyramid(int n){

    /*
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *
    */

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n*2-1; col++)
        {
            if (col>=row && col <= n-(row-3) || row == 0)
            {
                cout << "* ";
            }else{
                cout <<"  ";
            }
        }
        cout<<endl;
    }
    
}

void fullHollowPyraid(int n){
    /*

        *
      *   *
    *       *
  *           *
* * * * * * * * *

    */
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n*2-1; col++)
        {
            if (col == n-(row+1) || col == n +(row-1) || row == n-1)
            {
                cout << "* ";       
            }else{
                cout <<"  ";
            }
        }
        cout<<endl;
    }
}

void fullPyraidFirst(int n){   

    /*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

    */

    for (int row = 0; row < n; row++)
    {
    for (int col = 0; col < n*2-1; col++)
    {     
        if (col >= n-(row+1) && col <= n +(row-1) || row == n-1)
        {
             cout << "* "; 
        }else{
            cout <<"  ";
        }
    }
    cout<<endl;
    }
}

void hollowHalfPyramid(int n){



    /*
     * * * * * 
       *     * 
         *   * 
           * * 
             * 
    */


    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == n-1 || col == row )     
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }



    /*
            * 
          * *
        *   *
      *     *
    * * * * *
    */
    for (int row = 0; row < n; row++)
    {
        for (int  col = 0; col < n ; col++)
        {
           if (row == n-1 || col==n-1 || col==n-row-1 )
           {
            cout<<"* ";
           } else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }


    /*
    * * * * * 
    *     * 
    *   * 
    * * 
    * 
    */
    for (int row = 0; row < n; row++)
    {
        for (int  col = 0; col < n-row ; col++)
        {
           if (row==0 || col==0 || col==n-row-1)
           {
            cout<<"* ";
           } else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
}
