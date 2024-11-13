#include <stdio.h>

struct Process {
    int process_id;
    int arrival_time;
    int burst_time;
};

void fcfs_without_arrival_time(struct Process processes[], int n) {
    int waiting_time = 0, turnaround_time = 0;

    printf("Process\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        waiting_time += i == 0 ? 0 : processes[i - 1].burst_time;
        turnaround_time = waiting_time + processes[i].burst_time;

        printf("%d\t%d\t\t%d\n", processes[i].process_id, waiting_time, turnaround_time);
    }
}

void fcfs_with_different_arrival_time(struct Process processes[], int n) {
    int waiting_time = 0, turnaround_time = 0;

    printf("Process\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        waiting_time = waiting_time + (i == 0 ? 0 : (processes[i - 1].burst_time + processes[i - 1].arrival_time - processes[i].arrival_time));
        turnaround_time = waiting_time + processes[i].burst_time;

        printf("%d\t%d\t\t%d\n", processes[i].process_id, waiting_time, turnaround_time);
    }
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].process_id = i + 1;
    }

    fcfs_without_arrival_time(processes, n);

    fcfs_with_different_arrival_time(processes, n);

    return 0;
}
