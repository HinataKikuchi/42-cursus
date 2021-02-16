int switchsample1(void)
{
    int i,num;
    struct node *n;
    head=NULL;
    while(1)
    {
    printf("\nList Operations\n");
    printf("===============\n");
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Delete\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    if(scanf("%d",&i)<=0){
        printf("Enter only an Integer\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1:      printf("Enter the number to insert : ");
                 scanf("%d",&num);
                 insert(num);
                 break;
        case 2:     if(head==NULL)
                {
                printf("List is Empty\n");
                }
                else
                {
                printf("Element(s) in the list are : ");
                }
                display(n);
                break;
        case 3:     printf("Size of the list is %d\n",count());
                break;
        case 4:     if(head==NULL)
                printf("List is Empty\n");
                else{
                printf("Enter the number to delete : ");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d deleted successfully\n",num);
                else
                    printf("%d not found in the list\n",num);
                }
                break;
        case 5:     return 0;
        default:    printf("Invalid option\n");
        }
    }
    }
    return 0;
}

int switchsample2(void)
{
   switch (_e)
   {
   	case sunday:    { return "SUNDAY";    }
      case monday:  {  return "MONDAY";    }
      case tuesday:  { return "TUESDAY";   }
      case wednesday: {return "WEDNESDAY"; }
      case thursday:  {return "THURSDAY";  }
      case friday:    {return "FRIDAY";    }
      case saturday:  {return "SATURDAY";  }
   default: a=1;
   }
   return "InvalidDay";
}

int switchsample3(void)
{
  int menu;
  int stage;

  while(1)
  {
    //メニュー選択      
    menu = MazeTitle();
    printf("\n");

    if(menu == EXIT) //EXITならwhileループを抜けて終了
    {
      break;
    }
    else
    {
      //ステージ設定
      switch(menu)
      {
      case STAGE0:
        stage = 0;
        break;

      case STAGE1:
        stage = 1;
        break;
      }
    }

    //迷路ゲーム
    MazeGame(stage);

    //ゲームが終わるとwhileループの先頭にもどる
  }

  return 0;
}

int switchsample4(int x)
{
	switch(x){
		case 1:
			printf("数値は1です\n");
			break;
		case 2:
			printf("数値は2です\n");
			if(a==1){
				s=1;
			}
			else{
				s=0;
			}
			break;
		case 3:
		case 4:
			printf("数値は3です\n");
			break;
		default:
			printf("他の値です\n");
			s=2;
	}
	return 0;
}