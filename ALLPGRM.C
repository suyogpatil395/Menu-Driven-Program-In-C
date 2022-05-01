void main()
{
	int ch,num,rem,back,sum=0,no1,no2,no3;
	int s1,s2,s3,tot;
	int i=2,j=2;
	float fno,sno,tno;
	float avg;
	char c;
	clrscr();
	Main_Menu:
	do
	{
		clrscr();
		printf("\n\n\t\t_________________________________________");
		printf("\n\n\t\t<\t------- Main Menu -------\t>");
		printf("\n\t\t>\t\t\t\t\t<");
		printf("\n\t\t<\t1. Print Different Messages\t>");
		printf("\n\t\t>\t2. Arithmetic Operations\t<");
		printf("\n\t\t<\t3. If-Else Programs\t\t>");
		printf("\n\t\t>\t4. Loops Programs\t\t<");
		printf("\n\t\t<\t5. Exit\t\t\t\t>");
		printf("\n\t\t_________________________________________");
		printf("\n\n\t\t\tEnter Your Choice =");
		scanf("%d",&ch);
		printf("\n\t\t_________________________________________");
		switch(ch)
		{
			case 1:
			Print_Different_Messages_Menu:
			do
			{
				clrscr();
				printf("\n\n\t\t_________________________________________________");
				printf("\n\n\t\t<\t---- Print Different Messeges ----\t>");
				printf("\n\t\t>\t\t\t\t\t\t<");
				printf("\n\t\t<\t1. Personal Memorenda\t\t\t>");
				printf("\n\t\t>\t2. Time Table\t\t\t\t<");
				printf("\n\t\t<\t3. Result\t\t\t\t>");
				printf("\n\t\t<\t4. Back to main menu\t\t\t>");
				printf("\n\t\t>\t5. Exit\t\t\t\t\t<");
				printf("\n\t\t\t_________________________________________________");
				printf("\n\n\t\t\tPlease Enter Your Choice =");
				scanf("%d",&ch);
				printf("\n\n\t\t_________________________________________________");
				switch(ch)
				{
					case 1:
					clrscr();
					printf("\n-------------------------PERSONAL MEMORANDA--------------------------");
					printf("\n\n| *Name:\t\tMrs.Suyog Sanjay Patil");
					printf("\n| *Residential Address:\tMNO-281,Vaijali,Tal-Shahada,Dist-Nandurbar\t\t");
					printf("| *Telephone:\t\t289476\t\t");
					printf("\n| *Mobile No:\t\t9370817592\t\t");
					printf("\n| *E-mail:\t\tpatilsuyog395@gmail.com\t\t");
					printf("\n| *Date of Birth:\t07/09/2002\t\t");
					printf("\n| *Blood Group:\t\tB+\t\t");
					printf("\n| *Hobby:\t\tMusic,Cricket,Reading\t\t");
					printf("\n| *Weight:\t\t65KG\t\t");
					printf("\n=====================================================================");
					getch();
					break;

					case 2:
					clrscr();
					printf("\n===============================================================");
					printf("\nClass:-S.Y.MECH [A]\t\tClass Time Table");
					printf("\n---------------------------------------------------------------");
					printf("\nSr.No.\tTime\tMON\tTUES\tWEDS\tTHURS\tFRI\tSAT");
					printf("\n1\t10:30\tEM-III\tMT\tET\tMT\tSOM\tEM-III");
					printf("\n2\t11:20\tMP\tEM-III\tSOM\tMP\tMT\tSOM");
					printf("\n---------------------------------------------------------------");
					printf("\n12:10 TO 1:10\t\t\tLUNCH BREAK");
					printf("\n---------------------------------------------------------------");
					printf("\n3\t1:10\tET\tET\tCOI\tEM-III\tMP\tET");
					printf("\n4\t2:50\tMT\tSOM\tSOM\tEM_III\tMP");
					printf("\n---------------------------------------------------------------");
					printf("\n2:50 TO 3:20\t\t\tLG MEETING");
					printf("\n---------------------------------------------------------------");
					printf("\n5\t3:20\tMP\tET\tMT\tEM\tSOM\t-");
					printf("\n6\t4:10\tMSP-Pr\tSOM-Pr\tMT-Pr\tMP\t-\tWorkshop");
					printf("\n===============================================================");
					getch();
					break;

					case 3:
						clrscr();
						printf("\n\t\t\tR.C.PATEL INST. OF TECHNOLOGY");
						printf("\n\t\t\t=============================");
						printf("\n\t\t\tStatement of Marks and Grade");
						printf("\n\nName of Student: PATIL SUYOG SANJAY\t\tDiv-A");
						printf("\nPRN: 201103005\t\t\t\t\tRoll No:005");
						printf("Branch:B.Tech(Mech.)");
						printf("\n-------------------------------------------------------------------------------");
						printf("\nSEM-I\t\t\tCA(35)\t\tESE(65)\t\tTOTAL(100)\tGRADE");
						printf("\nEngg.M-II\t\t28\t\t41\t\t69\t\tB+");
						printf("\nEngg.Phy-II\t\t28\t\t38\t\t66\t\tB+");
						printf("\nEngg.Chem-II\t\t29\t\t45\t\t74\t\tA");
						printf("\nEngg.Graphics\t\t24\t\t35\t\t59\t\tB");
						printf("\nECS\t\t\t27\t\t39\t\t66\t\tB+");
						printf("\nComputer Prog.\t\t27\t\t39\t\t66\t\tB+");
						printf("\n================================================================================");
						printf("\nSEM-I(SGPA):\t7.45\t\tSEM-II(SGPA):\t7.52\t\tCGPA:\t7.49");
						printf("\nSEM-I CR Earn:\t20\t\tSEM-II CR Earn:\t21\t\tTotal:\t41");
						printf("\nSEM-I(Marks):\t499\t\tSEM-II(Marks):\t605\t\t%Marks\t71.23");
						printf("\n\nResult:\tPass");
						printf("\n--------------------------------------------------------------------------------");
						getch();
						break;

						case 4:
							goto Main_Menu;
							break;

						case 5:
							exit(0);

						default :
							printf("\n\n\t\tPlease Enter Valid Choice");
							break;
				}
				printf("\n\n\tDo You Want to Continue Print Different Masseges Menu (Y/N) =");
				scanf(" %c",&c);

			}while (c=='y' || c=='Y');
			printf("\n\n\t\t\tEnter Any Key To Exit...");
			break;

		case 2:
		do
		{
			clrscr();
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\t>\t---- Arithmetic Operations ----\t\t<");
			printf("\n\t\t<\t\t\t\t\t\t>");
			printf("\n\t\t>\t1. Addition\t\t\t\t<");
			printf("\n\t\t<\t2. Substraction\t\t\t\t>");
			printf("\n\t\t>\t3. Multiplication\t\t\t<");
			printf("\n\t\t<\t4. Division\t\t\t\t>");
			printf("\n\t\t>\t5. Exit\t\t\t\t\t<");
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\t\tEnter Your Choice =");
			scanf("%d",&ch);
			clrscr();
			switch(ch)
			{
				case 1:
					printf("\n\n\t\t_________________________________________________");
					printf("\n\n\t\t\t* For Addition...");
					printf("\n\n\t\t\tEnter The First Number =");
					scanf("%f",&fno);
					printf("\n\n\t\t\tEnter The Second numbe =");
					scanf("%f",&sno);
					printf("\n\n\t\t\tAdition is %.2f",fno+sno);
					printf("\n\n\t\t_________________________________________________");
					break;

				case 2:
					printf("\n\n\t\t_________________________________________________");
					printf("\n\n\t\t\t* For substraction...");
					printf("\n\n\t\t\tEnter The First Number =");
					scanf("%f",&fno);
					printf("\n\n\t\t\tEnter The Second number =");
					scanf("%f",&sno);
					printf("\n\n\t\t\tSubstraction is %.2f",fno-sno);
					printf("\n\n\t\t_________________________________________________");
					break;

				case 3:
					printf("\n\n\t\t_________________________________________________");
					printf("\n\n\t\t\t* For Multiplication...");
					printf("\n\n\t\t\tEnter The First Number =");
					scanf("%f",&fno);
					printf("\n\n\t\t\tEnter The Second number =");
					scanf("%f",&sno);
					printf("\n\n\t\t\tMultiplication is %.2f",fno*sno);
					printf("\n\n\t\t_________________________________________________");
					break;

				case 4:
				printf("\n\n\t\t_________________________________________________");
				printf("\n\n\t\t\t* For Divison...");
				printf("\n\n\t\t\tEnter The First Number =");
				scanf("%f",&fno);
				printf("\n\n\t\t\tEnter The Second number =");
				scanf("%f",&sno);
				printf("\n\n\t\t\tDivison is %.2f",fno/sno);
				printf("\n\n\t\t_________________________________________________");
				break;

				case 5:
					exit();
					break;

				default :
					printf("\n\n\t\t\tPlease Enter Valid Choice");
					break;
			}
			printf("\n\n\t\tDo You Want to Continue Arithmetic Operation Menu (Y/N) =");
			scanf(" %c",&c);

		}while (c=='y' || c=='Y');
		printf("\n\n\t\t\tEnter Any Key To Exit...");
		break;

		case 3:
		do
		{
			clrscr();
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\t\t*** If-Else Programs ***");
			printf("\n\n\t\t1. Finding the Greatest Number From Two Numbers");
			printf("\n\n\t\t2. Finding Greatest number From Three Numbers");
			printf("\n\n\t\t3. Checking Given Number Is +ve or -ve");
			printf("\n\n\t\t4. Checking Given Number Odd or Even");
			printf("\n\n\t\t5. In 3 Subjects total Marks & Percentage Of Student");
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\tEnter Your Choice =");
			scanf("%d",&ch);
			printf("\n\n\t\t_________________________________________________");
			switch (ch)
			{
				case 1:
					clrscr();
					printf("\n\n\t\t_________________________________________________");
					printf("\n\n\t\tFind the greatest of 2 numbers");
					printf("\n\n\t\tEnter the first number=");
					scanf("%d",&no1);
					printf("\n\n\t\tEnter the seond number=");
					scanf("%d",&no2);
					if(no1 == no2)
						printf("\n\t\tBoth are same");
					else
					{
						if (no1 > no2)
							printf("\n\t\t%d is greater",no1);
						else
							printf("\n\t\t%d is greater",no2);
					}
					printf("\n\n\t\t_________________________________________________");
					getch();
					break;

					case 2:
						clrscr();
						printf("\n\n\t\t_________________________________________________");
						printf("\n\n\t\tFind the greatest of 3 numbers");
						printf("\n\n\t\tEnter the first number =");
						scanf("%d",&no1);
						printf("\n\t\tEnter the seond number =");
						scanf("%d",&no2);
						printf("\n\t\tEnter the third number=");
						scanf("%d",&no3);
						if(no1 == no2 && no2 == no3)
							printf("\n\n\t\t\tAll are same");
						else
						{
							if (no1 > no2)
								printf("\n\n\t\t\t%d is greater",fno);
							else
							{
								if (no2 > no3)
									printf("\n\n\t\t\t%d is greater",no2);
								else
									printf("\n\n\t\t\t%d is greater",no3);
							}

						}
						getch();
						break;

					case 3:
						clrscr();
						printf("\n\n\t\t_________________________________________________");
						printf("\n\n\t\tFor checking given number is +vr or -ve");
						printf("\n\n\t\tEnter any number =");
						scanf("%d",&num);
						if (num==0)
						printf("\n\n\t%d is Neither +ve Nor -ve",num);
						else
						{
							if (num>0)
							printf("\n\n\t\t%d is Positive",num);
							else
								printf("\n\n\t\t%d is Negetive",num);
						}
						printf("\n\n\t\t_________________________________________________");
						getch();
						break;

					case 4:
						clrscr();
						printf("\n\n\t\t_________________________________________________");
						printf("\n\n\t\tFor checking given number is odd or even");
						printf("\n\n\t\tEnter any number =");
						scanf("%d",&num);
						if (num % 2)
							printf("\n\n\t\t%d is odd",num);
						else
							printf("\n\n\t\t%d is even",num);
						printf("\n\n\t\t_________________________________________________");
						getch();
						break;

					case 5:
						clrscr();
						printf("\n\n\t\t_________________________________________________");
						printf("\n\n\t\t\tFor finding class of students");
						printf("\n\n\t\tEnter the marks in subject 1 =");
						scanf("%d",&s1);
						printf("\n\n\t\tEnter the marks of s2 =");
						scanf("%d",&s2);
						printf("\n\n\t\tEnter the marks of s3 =");
						scanf("%d",&s3);
						if (s1>100 || s2>100 || s3>100 || s1<0 || s2<0 || s3<0 )
							printf("\n\n\t\tPlease Enter valid marks");
						else
						{
							tot = s1+s2+s3;
							avg = tot / 3.0;
							printf("\n\n\t\tTotal Marks = %d",tot);
							if ( s1<40 || s2<40 || s3<40 )
								printf("\n\n\t\t Fail");
							else
							{
								printf("\n\n\t\tAverage = %.2f",avg);
								if (avg >=70)
									printf("\n\n\t\tDistiction");
								else
								{
									if (avg >=60)
										printf("\n\n\t\tFirst Class");
									else
									{
										if (avg >=50)
											printf("\n\n\t\tSecond Class");
										else
										{
											if (avg >=40)
												printf("\n\n\t\tPass Class");
										}
									}
							}
						}
						printf("\n\n\t\t_________________________________________________");
						getch();
						break;

					case 6:
						exit();
						break;

					default :
						printf("\n\n\tPlease Enter the Vaild Choice ...");
						break;
				}

			}
			printf("\n\n\t\tDo You Want to Continue If-Else Programs Menu (Y/N) =");
			scanf(" %c",&c);

		}while (c=='y' || c=='Y');
		printf("\n\n\t\t\tEnter Any Key To Exit...");
		getch();
		break;
		case 4:
		do
		{
			clrscr();
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\t\t***Loops Programs***");
			printf("\n\n\t\t1. While Loop Programs");
			printf("\n\n\t\t2. For Loop Programs");
			printf("\n\n\t\t_________________________________________________");
			printf("\n\n\t\tEnter Your Choice =");
			scanf("%d",&ch);
			printf("\n\n\t\t_________________________________________________");
			switch (ch)
				{
				case 1:
				do
				{
					clrscr();
					printf("\n\n\t\t_________________________________________________");
					printf("\n\n\t\t\t---- While Loop Programs ----");
					printf("\n\n\t\t1. Printing number 1 to 10");
					printf("\n\t\t2. Printing table of 2");
					printf("\n\t\t3. Printing 1 to 100 even numbers");
					printf("\n\t\t4. Printing sum of cubes of given number");
					printf("\n\t\t5. Exit");
					printf("\n\n\t\t_________________________________________________");
					printf("\n\t\tEnter Your Choice =");
					scanf("%d",&ch);
					printf("\n\n\t\t_________________________________________________");
					switch (ch)
					{
						case 1:
							clrscr();
							printf("\n\n\t\tPrinting 1 to 10 Numbers");
							while ( ch <= 10)
							{
								printf("\n\t%d",ch);
								ch = ch+1;
							}
							getch();
							break;

						case 2:
							clrscr();
							printf("\n\t\tFor Printing Table of 2");
							while (i<=20)
							{
								printf("\n%d",i);
								i = i+2;
							}
							getch();
							break;

						case 3:
							clrscr();
							printf("\nFor printing 1 to 100 Even Number\n\n");
							while (j<=100)
							{
								if (j%2==0)
								{
									printf("\t\t%d",j);
								}
								j=j+1;
							}
							getch();
							break;

						case 4:
							clrscr();
							printf("\n\nFor printing sum of cubes of given number");
							printf("\n\nenter the number=");
							scanf("%d",&num);
							while(num!=0)
							{
								rem=num%10;
								num=num/10;
								sum=sum+ (rem*rem*rem);
							}
							printf("sum of digits=%d",sum);
							getch();
							break;

						case 5:
							exit();
							break;

						default:
							printf("\n\n\t\tPlease Enter Valid Choice =");
							scanf("%d",&ch);
							break;
						}
							printf("\n\n\t\tDo You Want to Continue While Loop Programs Menu (Y/N) =");
							scanf(" %c",&c);

						}while (c=='y' || c=='Y');
						printf("\n\n\t\t\tEnter Any Key To Exit...");
						getch();
						break;

				case 2 :
					do
					{
						clrscr();
						printf("\n\n\t\t_________________________________________________");
						printf("\n\n\t\t\t---- For Loop Programs ----");
						printf("\n\n\t\t1. Printing number 1 to 10");
						printf("\n\t\t2. Printing table of 2");
						printf("\n\t\t3. Printing 1 to 100 even numbers");
						printf("\n\t\t4. Printing sum of cubes of given number");
						printf("\n\t\t5. Exit");
						printf("\n\n\t\t_________________________________________________");
						printf("\n\t\tEnter Your Choice =");
						scanf("%d",&ch);
						printf("\n\n\t\t_________________________________________________");
						switch (ch)
						{
							case 1:
								clrscr();
								printf("\n\n\t\tPrinting 1 to 10 Numbers");
								for ( ;ch <= 10;)
								{
									printf("\n\t%d",ch);
									ch = ch+1;
								}
								getch();
								break;

							case 2:
								clrscr();
								printf("\n\t\tFor Printing Table of 2");
								for (;i<=20;)
								{
									printf("\n%d",i);
									i = i+2;
								}
								getch();
								break;

							case 3:
								clrscr();
								printf("\nFor printing 1 to 100 Even Number\n\n");
								for (;j<=100;)
								{
									if (j%2==0)
									{
										printf("\t\t%d",j);
									}
									j=j+1;
								}
								getch();
								break;

							case 4:
								clrscr();
								printf("\n\nFor printing sum of cubes of given number");
								printf("\n\nenter the number=");
								scanf("%d",&num);
								for(;num!=0;)
								{
									rem=num%10;
									num=num/10;
									sum=sum+ (rem*rem*rem);
								}
								printf("sum of digits=%d",sum);
								getch();
								break;

							case 5:
								exit();
								break;

							default:
								printf("\n\n\t\tPlease Enter Valid Choice =");
								scanf("%d",&ch);
								break;
							}
							printf("\n\n\t\tDo You Want to Continue For Loop Programs Menu (Y/N) =");
							scanf(" %c",&c);

						}while (c=='y' || c=='Y');
						printf("\n\n\t\t\tEnter Any Key To Exit...");
						getch();
						break;
						}
						printf("\n\n\t\tDo You Want to Continue Loop Programs Menu (Y/N) =");
						scanf(" %c",&c);

					}while (c=='y' || c=='Y');
					printf("\n\n\t\t\tEnter Any Key To Exit...");
					getch();
					break;

		case 5:
			exit();
			break;
		default :
			printf("\n\n\t\t\tPlease Enter valid Choice");
			break;
			}
			printf("\n\n\t\tDo You Want to Continue Main Menu (Y/N) =");
			scanf(" %c",&c);
	}while (c=='y' || c=='Y');
			printf("\n\n\t\t\tEnter Any Key To Exit...");
			getch();
}
