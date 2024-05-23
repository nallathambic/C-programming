#include<stdio.h>
void set_individual(int roe,int col, int val);
void print_arr();
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);

int arr[8][8];

int main(){
    int option = 0;
    while(1){
        printf("1. change all values\n");
        printf("2. change a single row.\n");
        printf("3. change a single column.\n");
        printf("4. change individual coorainates\n");
        printf("5. exit\n enter your choice : \n");
        scanf("%d", &option);
        if(option >= 6 || option < 1){
            printf("Invalid option, try again\n");
            continue;
        }else if (option == 1){
            int val;
            printf("Enter the value you want to set : ");
            scanf("%d",&val);
            set_arr_to(val);
            printf("Value set, printing now...\n");
            print_arr();
            
           } else if (option == 2){
            int row, val;
            printf("Enter the row you want to modify: ");
            scanf("%d", &row);
            printf("Enter the value you want to set for row %d: ",row);
            scanf("%d", &val);
            set_row_to(row,val);
            printf("Value set, printing now...\n");
            print_arr();
        } else if (option == 3){
            int col, val;
            printf("Enter the column you want to modify: ");
            scanf("%d", &col);
            printf("Enter the value you want to set for row %d: ",col);
            scanf("%d", &val);
            set_col_to(col,val);
            printf("Value set, printing now...\n");
            print_arr();
        } else if (option == 4){
            int row;int val;int col;
            printf("Enter the row: ");
            scanf("%d", &row);
            printf("Enter the col: ");
            scanf("%d", &col);
            printf("Enter the value  to set for arr[%d][%d]: ",row,col);
            scanf("%d", &val);
            set_individual(row, col, val);
            printf("Value set, printing now...\n");
            print_arr();
        } else if (option == 5){
            printf("Exiting...\n");
            break;
        } else {
           continue;
        }
    }
}

void print_arr(){
    for(int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

void set_arr_to(int num){
    for(int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            arr[i][j] = num;
        
            }
    }
   
}  

void set_col_to(int col, int val){
    for(int i=0; i<8; i++){
        arr[i][col] = val;
            }
    
} 

void set_row_to(int row, int val){
    for(int i=0; i<8; i++){
        arr[row][i] = val;
            }
    
} 
void set_individual(int row, int col, int val){
    arr[row][col]= val;
}