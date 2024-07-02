#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 23
#define SIMULATIONS 1000

void initialize_birthdays(int birthdays[31][12]);
void generate_random_birthdays(int birthdays[31][12]);
void print_birthdays(int birthdays[31][12]);
int count_same_birthdays(int birthdays[31][12]);

int main() {
    float total_same_birthdays = 0;
    float same_birthdays = 0;

    srand(time(NULL)); // Chama srand uma vez antes do loop de simulação
    for(int i = 0; i < SIMULATIONS; i++) {
        //printf("Simulação %d\n", i+1);
        int birthdays[31][12]; 
        initialize_birthdays(birthdays);
        generate_random_birthdays(birthdays);
        total_same_birthdays += count_same_birthdays(birthdays);
        if((count_same_birthdays(birthdays)) > 0){
            same_birthdays++;
        }
    }
    

    printf("Número total de aniversários iguais: %.2f\n", total_same_birthdays);
    printf("Média de aniversários iguais: %.2f\n", 100*(same_birthdays / SIMULATIONS));

    return 0;
}

void initialize_birthdays(int birthdays[31][12]) {
    for(int i = 0; i < 31; i++) {
        for(int j = 0; j < 12; j++) {
            birthdays[i][j] = 0;
        }
    }
}

void generate_random_birthdays(int birthdays[31][12]) {
    int day, month;
    for(int i = 0; i < N; i++) {
        day = rand() % 31;
        month = rand() % 12;
        birthdays[day][month]++;
    }
}

void print_birthdays(int birthdays[31][12]) {
    for(int i = 0; i < 31; i++) {
        for(int j = 0; j < 12; j++) {
            if(birthdays[i][j] > 0) {
                printf("Aniversário %d/%d: %d pessoas\n", i+1, j+1, birthdays[i][j]);
            }
        }
    }
}

int count_same_birthdays(int birthdays[31][12]) {
    int count = 0;
    for(int i = 0; i < 31; i++) {
        for(int j = 0; j < 12; j++) {
            if(birthdays[i][j] > 1) {
                count++;
            }
        }
    }
    return count;
}
