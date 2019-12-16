struct student_address
{
    char city[100];
    char phone[100];
};
struct student_personal_information
{
    char fname[100];
    char mname[100];
    char byear[100];
};
struct student
{

    char name[100],versity[100];
    char department[100];
    char roll[100];
    float result;
    struct student_address a;
    struct student_personal_information b;
} ;

void inseart_student_information()
{
   struct student x;

   FILE *fpt;
   fpt=fopen("students.txt","a+");
   printf("\n\n\tCHOICE YOUR OPTION **0** FOR EXIST OR OTHER INTEGER FOR CONTINUING : 1\n\n");
   int value=7;
   while(value)
   {

     printf("\tStudent name: ");
     scanf("%s",x.name);
     printf("\tVersity name: ");
     scanf("%s",x.versity);
     printf("\tDepartment name: ");
     scanf("%s",x.department);
     printf("\tRoll No: ");
     scanf("%s",x.roll);
     printf("\tResult: ");
     scanf("%f",&x.result);
     printf("\tFather name: ");
     scanf("%s",x.b.fname);
     printf("\tMother name: ");
     scanf("%s",x.b.mname);
     printf("\tBirth year: ");
     scanf("%s",x.b.byear);
     printf("\tPresent address: ");
     scanf("%s",x.a.city);
     printf("\tContact number: ");
     scanf("%s",x.a.phone);
     fprintf(fpt,"%s %s %s %s  %0.2lf %s %s %s %s %s %ch",x.name,x.versity,x.department,x.roll,x.result,x.b.fname,x.b.mname,x.b.byear,x.a.city,x.a.phone);
     printf("\n\n\tCHOICE YOUR OPTION **0** FOR EXIST OR OTHER INTEGER FOR CONTINUING : ");
     scanf("%d",&value);

   }
   fclose(fpt);
   printf(" \n\tCHOICE 4 FOR MAIN MUNU : ");
   int v;
    scanf("%d",&v);
    switch (v)
        {
        case 4:
            main();
            break;
        default :
            break;

        }
}
