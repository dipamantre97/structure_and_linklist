#include<stdio.h>
#include<stdlib.h>

/* structure padding
//#pragma pack(1)
struct stu
{

int data;//4
char name;//4
float f;//8
struct stu *ptr;//8
double d;//8
};
int main()
{
struct stu s;
printf("size=%ld\n",sizeof(s));
}*/

/* structure initilization
struct stu
{
int data;
char name[20];
float marks;
};
int main()
{
struct stu s={10,"Dipa",70.80};
struct stu s2;
//printf("%ld",sizeof(s));//28
printf("struct data: %d %s %f",s.data,s.name,s.marks);
printf("\nenter data\n");
scanf(" %d %s %f",&s2.data,s2.name,&s2.marks);
printf("\nstruct data: %d %s %f",s2.data,s2.name,s2.marks);
}*/


/* array of structure 
struct stu
{
int data;
char name[20];
float marks;
};
int main()
{
struct stu s2[10];
int i;
for(i=0;i<10;i++)
{
printf("enter data,name,marks :");
scanf(" %d %s %f",&s2[i].data,s2[i].name,&s2[i].marks);

}
for(i=0;i<10;i++)
printf(" %d %s %f\n",s2[i].data,s2[i].name,s2[i].marks);

}
*/

/* array within structure

struct stu
{
int roll;
int marks[5];
};
int main()
{
int i,j;
struct stu s[3];
printf("enter data:\n");

for(i=0;i<3;i++)
{
printf("enter data for student %d\n",i+1);
printf("enter roll no:");
scanf("%d",&s[i].roll);

for(j=0;j<5;j++)
{
printf("enter marks for subject %d: ",j+1);
scanf("%d",&s[i].marks[j]);
}
}


//printf("enter data is:\n");
for(i=0;i<3;i++)
{
printf("enter data for student %d\n",i+1);
printf("roll no=%d\t",s[i].roll);
for(j=0;j<5;j++)
{
printf("%d\t",s[i].marks[j]);
}
printf("\n");
}
return 0;
}
*/


/*2D array within structure

struct stu
{
int a[2][3];
};
int main()
{
struct stu s;
int i,j;
printf("enter array elements:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&s.a[i][j]);
}
}
printf(" array elements are:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",s.a[i][j]);
}
}
return 0;
}
*/

/* 3D array within structure
struct stu
{
int a[4][3][2];
};
int main()
{
struct stu s;
int i,j,k;
printf("enter array elements:\n");
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
//scanf("%d",&s.a[i][j][k]);
s.a[i][j][k]=rand();
}
}
}
printf(" array elements are:\n");
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
printf("%d\t",s.a[i][j][k]);
}
}
}
return 0;
}
*/

/* pointer to structure

struct stu
{
int roll;
char name[20];
};
int main()
{
struct stu s={1,"Dipa"};
struct stu *ptr=&s;
printf("roll no=%d,name=%s",ptr->roll,ptr->name);

return 0;
}
*/

/*structure within structure
struct stu
{
int roll;
char name[20];
struct date
{
int day;
int month;
}d;
}s;
int main()
{
printf("size=%ld",sizeof(s));//32
printf("size=%ld",sizeof(s.d));//18
printf("size=%ld",sizeof(s).d.day);//4
struct stu s={1,"Dipa",{11,11}};
printf("\n%d %s %d %d",s.roll,s.name,s.d.day,s.d.month);

return 0;
}
*/


/* passing structure mem as arguments

struct stu 
{
int roll;
char name[20];
};
void display(int rollno,char name[]);
int main()
{
struct stu s={1,"Dipa"};
display(s.roll,s.name);
}
void display(int rollno,char name[])
{
printf("%d\n",rollno);
printf("%s",name);
}
*/

/* passing structure variable as arguments

struct stu 
{
int roll;
char name[20];
};
void display(struct stu );
int main()
{
struct stu s={1,"Dipa"};
display(s);// passing whole array
}
void display(struct stu str)
{
printf("%d\n",str.roll);
printf("%s",str.name);
}
*/


/* passing pointer to structure as arguments

struct stu 
{
int roll;
char name[20];
int m;
};
void display(struct stu * );
void inc_marks(struct stu *);
int main()
{
struct stu s={1,"Dipa"};
display(&s);
inc_marks(&s);
}
void display(struct stu *str)
{
printf("%d\n",str->roll);
printf("%s",str->name);
}
void inc_marks(struct stu *strr)
{
(strr->m)++;
}
*/

/* returning structure variable from fun

struct stu 
{
int roll;
char name[20];
int m;
};
void display(struct stu  );
struct stu inc_marks(struct stu);
int main()
{
struct stu s={1,"Dipa",50};
s=inc_marks(s);
display(s);
}
void display(struct stu str)
{
printf("%d\n",str.roll);
printf("%s\n",str.name);
printf("%d",str.m);
}
struct stu inc_marks(struct stu strr)
{
strr.m=strr.m+5;
strr.roll=strr.roll+4;
return strr;
}
*/


/* returning pointer to structure from fun
struct stu 
{
int roll;
char name[20];
int m;
};
void display(struct stu * );
struct stu * fun(struct stu *);
int main()
{
struct stu s={1,"Dipa",60};
struct stu *ptr;
ptr=fun(&s);
display(ptr);
}
void display(struct stu *str)
{
printf("%d\n",str->roll);
printf("%s\n",str->name);
printf("%d",str->m);
}
struct stu * fun(struct stu *strr)
{
strr->m=strr->m+5;
return strr;
}

*/


/*passing array of structures as arguments

struct stu
{
int roll;
char name[20];
};
void fun( struct stu str[]);
void display(struct stu strr);
int main()
{
int i;
struct stu s[3]={ 
                  {1,"dipa"},
                  {2,"Madhu"},
                  {3,"Ajay"}
               };
               
   fun(s);
   for(i=0;i<3;i++)
   display(s[i]);
   return 0;
}
void fun( struct stu str[])
{
int i;
for(i=0;i<3;i++)
{
str[i].roll=str[i].roll+5;
}
}
void display(struct stu strr)
{
printf("%d\n",strr.roll);
printf("%s\n",strr.name);

}

 */                  
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
















