void showing_student_information()

{
    struct student x;
    FILE *view;
    view=fopen("students.txt","r");
    while(fscanf(view,"%s %s %s %s %f %s %s %s %s %s",x.name,x.versity,x.department,x.roll,&x.result,x.b.fname,x.b.mname,x.b.byear,x.a.city,x.a.phone)!=EOF)
        {
         printf("\n\n\n\n\t**!!**=Student name: %s",x.name);
         printf("\n\t**!!**=Versity name: %s",x.versity);
         printf("\n\t**!!**=Department name: %s",x.department);
         printf("\n\t**!!**=Roll No: %s",x.roll);
         printf("\n\t**!!**=Result: %f",x.result);
         printf("\n\t**!!**=Father name: %s",x.b.fname);
         printf("\n\t**!!**=Mother name: %s",x.b.mname);
         printf("\n\t**!!**=Birth year: %s",x.b.byear);
         printf("\n\t**!!**=Present address: %s",x.a.city);
         printf("\n\t**!!**=Contact number: %s",x.a.phone);
        }
        fclose(view);
        printf(" \n\nPLEASE ENTER 5 FOR MAIN MUNU: ");
        int v;
        scanf("%d",&v);
        switch (v)
        {
        case 5:
            main();
            break;
        default :
            break;

        }



}
