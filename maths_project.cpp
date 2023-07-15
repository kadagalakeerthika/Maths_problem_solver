#include <bits/stdc++.h>
using namespace std;
#define e 2.71828183
#define pi 3.14159265

float fact(int n){
     int i;
     float k=1;
     for(i=1;i<=n;++i){
         k=k*i;
     }
     return k;
 }
 
 float solve(vector<float>&A,float x){
     int n = A.size();
     double val = 0;
     for(int i=0;i<n;++i){
         val = val + ((A[i])*(pow(x,i)));
         
     }
     
     return val;
     
     
 }
 
 float diff(vector<float>A,float x){
     int n = A.size();
     vector<float>B;
     double val,ans=0;
     for(int i=1;i<n;++i){
         val = (i)*A[i];
         B.push_back(val);
     }
     n = n-1;
    for(int i=0;i<n;++i){
         ans = ans + ((B[i])*(pow(x,i)));
         
     } 
     
     return ans;
 }
 
 void equa(float c[],float x[],int n,float cf){
    int i,j,k,l,o,p,q,r,s,t;
    float m[11];
    for(i=0;i<10;++i){
        m[i]=0;
    }
    c[n]=c[n]+cf;
    
    for(i=0;i<n;++i){
        m[1]=m[1]+x[i];
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            m[2]=m[2]+(x[i]*x[j]);
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
            m[3]=m[3]+(x[i]*x[j]*x[k]);
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
            m[4]=m[4]+(x[i]*x[j]*x[k]*x[l]);
                }
            }
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
            m[5]=m[5]+(x[i]*x[j]*x[k]*x[l]*x[o]);
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
            m[6]=m[6]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]);
                        }
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
            m[7]=m[7]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]);
                            }
                        }
                    }
                }
            }
        }
    }
    
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
            m[8]=m[8]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
                                    for(s=r+1;s<n;++s){
            m[9]=m[9]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]*x[s]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
                                    for(s=r+1;s<n;++s){
                                        for(t=s+1;t<n;++t){
            m[9]=m[9]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]*x[s]*x[t]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<n;++i){
        c[i]=(c[i] + (m[n-i]*cf));
        
    }
}

void equal(float c[],float X[],int n,float cf,int num){
    int i,j,k,l,o,p,q,r,s,t;
    float m[11],x[11];
    for(i=0;i<10;++i){
        m[i]=0;
    }
    for(i=0;i<n;++i){
       x[i]=X[i]; 
    }
    x[num]=0;
    for(i=0;i<n;++i){
        
    }
    
    
    
    for(i=0;i<n;++i){
        m[1]=m[1]+x[i];
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            m[2]=m[2]+(x[i]*x[j]);
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
            m[3]=m[3]+(x[i]*x[j]*x[k]);
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
            m[4]=m[4]+(x[i]*x[j]*x[k]*x[l]);
                }
            }
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
            m[5]=m[5]+(x[i]*x[j]*x[k]*x[l]*x[o]);
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
            m[6]=m[6]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]);
                        }
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
            m[7]=m[7]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]);
                            }
                        }
                    }
                }
            }
        }
    }
    
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
            m[8]=m[8]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
                                    for(s=r+1;s<n;++s){
            m[9]=m[9]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]*x[s]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
     for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            for(k=j+1;k<n;++k){
                for(l=k+1;l<n;++l){
                    for(o=l+1;o<n;++o){
                        for(p=o+1;p<n;++p){
                            for(q=p+1;q<n;++q){
                                for(r=q+1;r<n;++r){
                                    for(s=r+1;s<n;++s){
                                        for(t=s+1;t<n;++t){
            m[9]=m[9]+(x[i]*x[j]*x[k]*x[l]*x[o]*x[p]*x[q]*x[r]*x[s]*x[t]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<=n;++i){
        printf("m[%d] = %f\n",i,m[i]);
    }
    
    for(i=0;i<n;++i){
        c[i]=(c[i] + (m[n-i]*cf));
        
        printf("c[%d] = %f \n",i,c[i]);
    }
    c[n]=c[n]+cf;
    
    
}
void newtons_forward_equation()
{
    printf("<<<<<<<<<<<<<<<<<<<<<:: NEWTONS FORWARD INTERPOLATION EQUATION STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    float h,x[20],df[20][20],val,k,m[20],c[10],cf[20],X[20];
   int i,j,n;
   float sum=0;
   printf("Enter number of inputs :");
   scanf("%d",&n);
   printf("Enter the value of x and f(x) for %d inputs :\n",n);
   for(i=0,j=0;i<n;++i){
       scanf("%f",&X[i]);
       scanf("%f",&df[j][i]);
       
   }
   for(i=0;i<n;++i){
       if(X[i]!=0){
       x[i]=(-1)*X[i];}
       else{
           x[i]=0;
       }
       
   }
   h=x[0]-x[1];
   
   for(i=1;i<n;++i){
       for(j=1;j<n;++j){
           df[i][j]=0;
       }
   }
   for(i=1;i<n;++i){
       for(j=0,k=n-i;k>0;++j,--k){
           df[i][j]=df[i-1][j+1]-df[i-1][j];
           
           
       }
   }
   for(i=0;i<10;++i){
       c[i]=0;
   }
   for(i=1;i<n;++i){
       cf[i]=(df[i][0])/(fact(i)*pow(h,i));
       
   }
   
   c[0]=df[0][0];
   for(i=1;i<n;++i){
       equa(c,x,i,cf[i]);
       
   }
   printf("Equation  :  ");
   for(i=n-1;i>=0;--i){
       if(c[i]!=0){
           printf("%fx^%d  ",c[i],i);
       }
   }
   
   

   printf("\n<<<<<<<<<<<<<<<<<<<<<:: NEWTONS FORWARD INTERPOLATION EQUATION FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n"); 
}

void trapezoidal()
{
    printf("<<<<<<<<<<<<<<<<<<<<<:: TRAPEZOIDAL METHOD STARTED::>>>>>>>>>>>>>>>>>>>>>>\n");
    int n,i,j,deg;
    float a,b,h,X[20],sum=0,x,y,area,val;
    printf("Now Entering the equation:\n");
    printf("Enter degree of the polynomial :");
    scanf("%d",&deg);
    vector<float>A(deg+1,0);
    for(i=deg;i>=0;--i){
        printf("coeff of x^%d :",i);
        scanf("%f",&val);
        A[i]=val;
    }
    
    printf("Enter lower bound of integral:");
    scanf("%f",&a);
    printf("Enter upper bound of integral:");
    scanf("%f",&b);
    printf("Enter n:");
    scanf("%d",&n);
    h=(float)(b-a)/n;
    for(i=0;i<=n;i++)
    {
        X[i]=a+i*h;
    }
    i=0;
    while(1)
    {
        if(i>n)
            break;
        if(i==0||i==n)
            j=1;
        else
            j=2;
        x=X[i];
        y= solve(A,x);  /*Enter y=f(x) here*/
        sum=j*y+sum;
        i++;
    }
    area=(h/2)*(sum);
    printf("Answer:%f\n",area);
    printf("<<<<<<<<<<<<<<<<<<<<<:: TRAPEZOIDAL METHOD FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}

void newtons_forward_value()
{
    printf("<<<<<<<<<<<<<<<<<<<<<:: NEWTONS FORWARD INTERPOLATION VALUE STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
   float n,h,x[20],df[20][20],val,k,m[20];
   int i,j;
   float sum=0;
   printf("Enter number of inputs :");
   scanf("%f",&n);
   printf("Enter the value of x and f(x) for %f inputs :",n);
   for(i=0,j=0;i<n;++i){
       scanf("%f",&x[i]);
       scanf("%f",&df[j][i]);
   }
   h=x[1]-x[0];
   for(i=1;i<n;++i){
       for(j=1;j<n;++j){
           df[i][j]=0;
       }
   }
   for(i=1;i<n;++i){
       for(j=0,k=n-i;k>0;++j,--k){
           df[i][j]=df[i-1][j+1]-df[i-1][j];
           
           
       }
   }
   printf("Enter the value you want :");
   scanf("%f",&val);
   
   for(i=1,j=0,m[0]=1,sum=df[0][0];i<n;++i){
       
       
       m[i]=(m[i-1]*(val-x[i-1]))/(i*h);
       
       sum=sum+(m[i]*df[i][0]); 
       
       
   }
   printf("\nsum =  %f\n",sum);
   printf("<<<<<<<<<<<<<<<<<<<<<:: NEWTONS FORWARD INTERPOLATION VALUE FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}

void lagrange_equation(){
    printf("<<<<<<<<<<<<<<<<<<<<<:: LAGRANGE EQUATION METHOD STARTED::>>>>>>>>>>>>>>>>>>>>>>\n");
    int n,i,j,k,l,num;
    float x[20],X[20],f[20],cf[20],c[20],tmp;
    printf("Enter number of inputs :");
    scanf("%d",&n);
    printf("Enter the value of x and f(x) respectively :");
    for(i=0;i<n;++i){
        scanf("%f",&x[i]);
        scanf("%f",&f[i]);
    }
    
    for(i=0;i<n;++i){
        cf[i]=f[i];
        for(j=0;j<n;++j){
            if(i!=j){
                
                cf[i]=cf[i]/(x[i]-x[j]);
                
            }
        }
    }
    
    for(i=0;i<n;++i){
        x[i]= (-1)*x[i];
    }
    for(i=0;i<=n;++i){
        c[i]=0;
        
    }
    
    for(i=0;i<n;++i){
        equal(c,x,n,cf[i],i);
    }
    for(i=0;i<n;++i){
        c[i]=c[i+1];
    }
    
    
    for(i=0;i<=n;++i){
        printf("c[%d] = %f\n",i,c[i]);
    }
    
    for(i=n-1;i>=0;--i){
        if(c[i]!=0){
            printf(" %fx^%d  ",c[i],i);
        }
    }
    printf("\n<<<<<<<<<<<<<<<<<<<<<:: LAGRANGE EQUATION METHOD FINISHED::>>>>>>>>>>>>>>>>>>>>>>\n");

}

void gauss_seidel_iteration(){
    printf("<<<<<<<<<<<<<<<<<<<<<:: GAUSS SEIDAL ITERATION STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    float x[100][4],d[4],a[4][4];
    int n,i,j,k;
    
    printf("Enter the coefficient of equations :in row diagonally dominant sequence :\n");
    for(i=1;i<4;++i){
        printf("Enter %d equation quotients :",i);
        for(j=1;j<4;++j){
            scanf("%f",&a[i][j]);
        }
        printf("Enter the constant value of equation :");
        scanf("%f",&d[i]);
    }
    printf("Enter the initial guess values :");
    for(i=1;i<4;++i){
        scanf("%f",&x[0][i]);
    }
    printf("Enter number of iterations : ");
    scanf("%d",&n);
    for(i=1;i<n;++i){
        x[i][1]=((d[1])-(a[1][2]*x[i-1][2])-(a[1][3]*x[i-1][3]))/a[1][1];
        x[i][2]=((d[2])-(a[2][1]*x[i][1])-(a[2][3]*x[i-1][3]))/a[2][2];
        x[i][3]=((d[3])-(a[3][1]*x[i][1])-(a[3][2]*x[i][2]))/a[3][3];
        printf("x1[%d] = %f ,x2[%d] = %f ,x3[%d] = %f \n",i,x[i][1],i,x[i][2],i,x[i][3]);
        
    }
    printf("<<<<<<<<<<<<<<<<<<<<<:: GAUSS SEIDAL ITERATION FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}

void jacobbi_iteration(){
    printf("<<<<<<<<<<<<<<<<<<<<<:: JACOBBI ITERATION STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    float x[100][4],d[4],a[4][4];
    int n,i,j,k;
    
    printf("Enter the coefficient of equations :in row diagonally dominant sequence :\n");
    for(i=1;i<4;++i){
        printf("Enter %d equation quotients :",i);
        for(j=1;j<4;++j){
            scanf("%f",&a[i][j]);
        }
        printf("Enter the constant value of equation :");
        scanf("%f",&d[i]);
    }
    printf("Enter the initial guess values :");
    for(i=1;i<4;++i){
        scanf("%f",&x[0][i]);
    }
    printf("Enter number of iterations : ");
    scanf("%d",&n);
    for(i=1;i<n;++i){
        x[i][1]=((d[1])-(a[1][2]*x[i-1][2])-(a[1][3]*x[i-1][3]))/a[1][1];
        x[i][2]=((d[2])-(a[2][1]*x[i-1][1])-(a[2][3]*x[i-1][3]))/a[2][2];
        x[i][3]=((d[3])-(a[3][1]*x[i-1][1])-(a[3][2]*x[i-1][2]))/a[3][3];
        printf("x1[%d] = %f ,x2[%d] = %f ,x3[%d] = %f \n",i,x[i][1],i,x[i][2],i,x[i][3]);
        
    }
    printf("<<<<<<<<<<<<<<<<<<<<<:: JACOBBI ITERATION FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}

void lagrange_value() {
	
	printf("<<<<<<<<<<<<<<<<<<<<<:: LAGRANGE VALUE METHOD STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
	float sum=0,l[50],A[50],x[50],val,fx[50];
	int i,j,k,n;
	printf("Enter n :");
	scanf("%d",&n);
	for(i=0;i<n;++i){
	    printf("Enter x[%d] = ",i);
	    scanf("%f",&x[i]);
	    printf("Enter fx[%d] = ",i);
	    scanf("%f",&fx[i]);
	    
	    
	}
	
	printf("Enter the value : \n");
	scanf("%f",&val);
	
	for(i=0;i<n;++i){
	    l[i]=1;
	    for(j=0;j<n;++j){
	        if(j==i){
	            ++j;
	            if(j==n){
	                break;
	            }
	        }
	        
	        l[i]=l[i]*(val-x[j])/(x[i]-x[j]);
	        
	        
	        
	    }
	    
	}
	for(i=0;i<n;++i){
	 
	    sum=sum+(l[i]*fx[i]);
	}
	printf("FINAL VALUE  =%f\n",sum);
	printf("<<<<<<<<<<<<<<<<<<<<<:: LAGRANGE VALUE METHOD FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
	
}

void newton_raphson() {
    printf("<<<<<<<<<<<<<<<<<<<<<:: NEWTONS RAPHSON METHOD STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    int i,k,deg;
	float m[100],x,val;
	float fx,f1x;
	printf("Now Entering the equation:\n");
    printf("Enter degree of the polynomial :");
    scanf("%d",&deg);
    vector<float>A(deg+1,0);
    for(i=deg;i>=0;--i){
        printf("coeff of x^%d :",i);
        scanf("%f",&val);
        A[i]=val;
    }
	printf("initial guess :");
	scanf("%f",&m[0]);
	
	for(k=0;k<10;++k){
	    x=m[k];
	    fx=solve(A,x);/*WRITE F(X) HERE*/
	    f1x=diff(A,x);  /*WRITE F'(X) HERE*/
	    m[k+1]= (m[k])-(fx/f1x);
	    printf("\nx%d = %f\n",k,m[k]);
	    
	}
	printf("<<<<<<<<<<<<<<<<<<<<<:: NEWTONS RAPHSON METHOD FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}


void simpsons_one_third()
{
    printf("<<<<<<<<<<<<<<<<<<<<<:: SIMPSONS ONE THIRD METHOD STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    int n,i,j,deg;
    float a,b,h,X[10000],sum=0,x,y,area,val;
    printf("Now Entering the equation:\n");
    printf("Enter degree of the polynomial :");
    scanf("%d",&deg);
    vector<float>A(deg+1,0);
    for(i=deg;i>=0;--i){
        printf("coeff of x^%d :",i);
        scanf("%f",&val);
        A[i]=val;
    }
    printf("Enter lower bound of integral:");
    scanf("%f",&a);
    printf("Enter upper bound of integral:");
    scanf("%f",&b);
    printf("Enter n:");
    scanf("%d",&n);
    h=(float)(b-a)/n;
    for(i=0;i<=n;i++)
    {
        X[i]=a+i*h;
    }
    i=0;
    while(1)
    {
        if(i>n)
            break;
        if(i==0||i==n)
            j=1;
        if(i%2==1)
            j=4;
        if(i%2==0&&i!=n&&i!=0)
            j=2;
        x=X[i];
        y= solve(A,x); /*Enter y=f(x) here */
        sum=sum+j*y;
        i++;
    }
    area=(h/3)*(sum);
    printf("Answer:%f\n",area);
   printf("<<<<<<<<<<<<<<<<<<<<<:: SIMPSONS ONE THIRD METHOD FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
}

void bisection()
{
    printf("<<<<<<<<<<<<<<<<<<<<<:: BISECTION METHOD STARTED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    int i,deg;
    float a,b,c,j,x,y,z,val;
    printf("Now Entering the equation:\n");
    printf("Enter degree of the polynomial :");
    scanf("%d",&deg);
    vector<float>A(deg+1,0);
    for(i=deg;i>=0;--i){
        printf("coeff of x^%d :",i);
        scanf("%f",&val);
        A[i]=val;
    }
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("The values of ai,bi,xi are :\n");
    for(i=1;i<20;i++)
    {
        z=1;
        for(j=a;j<=(a+b)/2;j=j+(b-a)/2)
        {
            x=j;
            y=solve(A,x); /*Enter f(x) here */
            z=z*y;
        }
        if(z<0)
            b=(a+b)/2;
        else
            a=(a+b)/2;
        c=(a+b)/2;
        printf("a%d=%f\tb%d=%f\n",i,a,i,b);
        printf("x(%d)=%f\n\n",i,c);
    }
    
    printf("<<<<<<<<<<<<<<<<<<<<<:: BISECTION METHOD FINISHED ::>>>>>>>>>>>>>>>>>>>>>>\n");
    
}
int main()
{
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<:::  WELCOME TO THE MATHS PROBLEM SOLVER  :::>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n\n");
    printf("ENTER THE NUMBER FOR DESIRED METHOD:\n");
    printf(" 1 - NEWTONS FORWARD INTERPOLATION EQUATION\n 2 - TRAPEZOIDAL METHOD \n 3 - LAGRANGE INTERPOLATION EQUATION \n 4 - GAUSS SIDEL ITERATION \n 5 - JACOBI ITERATION \n 6 - NEWTON RAPHSON METHOD \n 7 - SIMPSON'S ONE THIRD METHOD \n 8 - BISECTION METHOD \n 9 - NEWTONS FORWARD INTERPOLATION VALUE \n 10 - LAGRANGE INTERPOLATION VALUE \n");
    int a;
    while(1){
        printf("Enter the METHODS number: ");
        scanf("%d",&a);
        if(a==1){
            newtons_forward_equation();
        }
        else if(a==2){
            trapezoidal();
        }
        else if(a==3){
            lagrange_equation();
        }
        else if(a==4){
            gauss_seidel_iteration();
        }
        else if(a==5){
            jacobbi_iteration();
        }
        else if(a==6){
            newton_raphson();
        }
        else if(a==7){
            simpsons_one_third();
        }
        else if(a==8){
            bisection();
        }
        else if(a==9){
            newtons_forward_value();
        }
        else if(a==10){
            lagrange_value();
        }
        else{
            printf("INVALID NUMBER\n");
            break;
        }
        printf("\n");
        printf("If you want to END then enter   '0'   else enter any number: ");
        scanf("%d",&a);
        if(a==0){
            printf("<<<<<<<<<<<<<<<<<<<<<<<<::  THANKS FOR USING THIS  ::>>>>>>>>>>>>>>>>>>>>>>>>>");
           break;
        }
        else{
            continue;
        }
        
        
    }
    
    
    
    
    
    
    
    
}