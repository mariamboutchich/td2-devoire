#include<iostream>
#include<complex.h>
#include<vector>
using namespace std;

 /*class td2
 {
 public:
   static void affichage()
   {
      static int conter =0;
      cout<< ++conter;

   }
   
 };
 
 
 int main()                             
 {
    td2::affichage();
    td2::affichage();
    // cout<<"le nombre de fois est "<<td2.affichage();
     //cout<<"le nombre de fois est "<<td2.affichage();
     return 0;
 }*/
 /********************************EXERCICE 2*******************************************************/
 /*class nombre
 {
 private:
    int n;
 public:
  void multiple(int n)
  {
   if (n%2==0)
     {
     cout<<"le nombre  "<< n <<" est multiple de 2"<<endl;
     }
    
  }
   void multi(int n)
   {
    if (n%3==0)
    {
       cout<<"le nombre "<< n << "  est multiple de 3"<<endl;
    }
    
   }
  
    };
    int main()
    {
       
        nombre nbr;
        nbr.multiple(58);
        nbr.multi(87);
        
    }*/
    /******************************************************EXERCICES   3***********************************/
   /* class formalisme
    {
    private:
        int arr[10];
    public:
    int plusgrand(int arr[10]
    { 
        int max=arr[0];
        for (int i = 0; i < 10; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }

            
        }
        return max;
    }
    int pluspetit(int arr[10]
    { 
        int min=arr[0];
        for (int i = 0; i < 10; i++)
        {
            if (arr[i]<min)
            {
                min=arr[i];
            }

            
        }
        return min;
    }
        
    };
    
    int main()
    {
        int tab[10];
        for (int i = 0; i < 10; i++)
        {
           cout<<"tab[" <<i<<"]=    "<<endl;
           cin>>tab[i];
        }
        formalisme f1;
         cout<<"le plus grande est "<< f1.plusgrand(tab[10]);
         cout<<"le plus petit est " << f1.pluspetit(tab[10]);
        return 0;
    }*/
    /************************************EXERCICE 4********************************************************/
   /* int main()
    {
        int *tableau;
        int *tableaucarre;
        int taille;
        tableau=new int[taille];
        tableaucarre= new int[taille];
        for (int i = 0; i < taille; i++)
        {
            cout<<"entrez la taille \n";
            cin>> taille;
            cout<<"entrez les element de tableau "<<i <<endl;
            cin>>tableau[i];
        }
        for (int i = 0; i < taille; i++)
        {
            cout <<  tableau[i] <<"   ";
        }
        
        cout << "Les éléments du tableau sont : ";
       for (int i = 0; i < taille; i++)
        {
        cout << tableau[i] << " ";
        }
        for (int  i = 0; i < ; i++)
        {
            tableaucarre[i] = tableau[i] * tableau[i] ;
            cout<<"les element de nouveau tableau est "<<tableaucarre[i]<<endl;
        }
        return 0;
    }*/
    /************************************************EXERCICES 5*************************************/
    /*int main()
    {
        int a;
        int& ref=a;
        int *ptr;
        ptr=&a;
        cout<<"entrez le n /n";
        cin>>a;
        cout<<"l'element a est "<<ptr<<endl;
        cout<<"l'element a est "<<ref<<endl;
        return 0;

    }*/
    /************************************************EXERCICES 6*****************************************/
     /*int incrimenter(int *a)
     {
        int x=0;
        cin >>*a;
        x++;
        *a=x;
        return a;
     }
     int echange(int *a)
     {
         int  m;
         cout<<"entrez un nombre "<<endl;
         cin>>m;
         *a=m;
        return a;
     }
    int main()
    {
    int ref n;
    cout<<"entrez le n"<<endl;
    cin>> ref n;
    cout<<"la nouvelle valeure de n est "<<incrimenter(&n);
    cout<<"la nouvelle valeure de n est "<<echange(&n);
    cout<<"la nouvelle valeure de n est "<<incrimenter(ref n);
    cout<<"la nouvelle valeure de n est "<<echange(ref n);
    return 0;
    }*/
    /*****************************************************EXERCICES 7***********************************/
   /* int main()
        {
            int t[10];
            int a=0;
            bool s;
            cout<<"element de tableau est "<<endl;
            for (int i = 0; i < 10; i++)
            {
                cout<<"t["<<i<<"]="<<endl;
                cin>>t[i];
            }
             cout<<"les element bien ordre est"<<endl;
         do{
            s=false;
            for (int  i = 0 ; i < 9 ; i++ )
            {
                if (t[i]>t[i+1])
                {
                   a =t[i];
                   t[i]=t[i+1];
                   t[i+1]=a; 
                   s=true;
                 
                }
              
            }
            } while (s==true);
            for (int i = 0; i < 10; i++)
            {
                cout<<t[i];
            }
            
           return 0; 
        }*/
        /***************************************************EXERCICES 8 *****************************************/
       
      /* class complex
       {
       private:
       int reel;
       int img;
       public:
       complex();
       complex(int ,int);
       complex(const complex&);
       void complex::affiche();
       friend  complex somme(cont complex&,cont complex&);
       friend  complex mult(cont complex&,cont complex&)
       friend  complex divi(cont complex&,cont complex&)
       friend  complex sous(cont complex&,cont complex&)
       
       };

       complex::complex()
       {

       }
       complex::complex(int a,int b)
       {
        this->reel=a;
        this->img=b;
       }
        complex::complex(const complex & m)
        {
          reel=m.reel;
          img=m.img;
        }
        void complex::affiche()
        {
            cout<<endl<<reel<<"=i"<<img;
        }
       complex somme(cont complex& a,cont complex& b)
       {
        complex m(a.reel+b.reel,a.img+b.img);
        return m;
       }
       complex mult(cont complex& a,cont complex& b)
       {
        complex m(a.reel*b.reel,a.img*b.img);
        return m;
       }
       complex divi(cont complex& a,cont complex& b)
       {
        complex m(a.reel%b.reel,a.img%b.img);
        return m;
       }
       complex sous(cont complex& a,cont complex& b)
       {
        complex m(a.reel-b.reel,a.img-b.img);
        return m;
       }
       int main()
       {
        complex c1(6,9),c2(3,7);
        mu(c1,c2).affiche();
        sous(c1,c2).affiche();
        divi(c1,c2).affiche();
        
        return 0;

       }*/
       /****************************************************EXERCICES 9**********************************/
       class vector
       {
       public:
         double x, y, z;

              vector:: vector(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z)
             {

             }

             int  Vector ::somme( Vector& v)
          {
               return (vector1[x] + vector2[x]) + (vector1[y] + vector2[y]) + (vector1[z] + vector2[z]);
          }
             int vector:: dotProduct()
           {
            return (vector1[x] * vector2[x]) + (vector1[y] * vector2[y]) + (vector1[z] * vector2[z]);
           }
           bool vector :: coincidentVectors(const double vector1[3], const double vector2[3])
             {
                return (vector1[x] == vector2[x] && vector1[y] == vector2[y] && vector1[z] == vector2[z]);
              }
;

           int main() {
           Vector vector1(1, 2, 3);
           Vector vector2(4, 5, 6);
           bool coincide = coincidentVectors(vector1, vector2);
           cout << "Vector1: (" << vector1.x << ", " << vector1.y << ", " << vector1.z << ")\n";
           cout << "Vector2: (" << vector2.x << ", " << vector2.y << ", " << vector2.z << ")\n";
           cout<<"la somme est "<<somme( Vector& v)<<endl;
           cout << "Le produit scalaire est : " << dotProduct() << endl;
           if (coincide) 
           {
               cout << "Les vecteurs coïncident." <<endl;
             }
                          else
                   {
                     cout << "Les vecteurs ne coïncident pas." <<endl;
                    }

    return 0;
}
       