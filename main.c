#include <stdio.h>

struct BloodRequest
{
    char patientName[50];
    char bloodGroup[5];
    int units;
    char hospital[100];
    char contact[15];
};

int main()
{
    struct BloodRequest request;

    printf("====================================\n");
    printf("        BLOOD REQUEST SYSTEM\n");
    printf("====================================\n");

    printf("Enter Patient Name: ");
    scanf(" %[^\n]", request.patientName);

    printf("Enter Blood Group (A+/A-/B+/B-/O+/O-/AB+/AB-): ");
    scanf("%4s", request.bloodGroup);

    printf("Enter Required Units: ");
    scanf("%d", &request.units);

    printf("Enter Hospital Name: ");
    scanf(" %[^\n]", request.hospital);

    printf("Enter Contact Number: ");
    scanf("%14s", request.contact);

    printf("\n====================================\n");
    printf("        BLOOD REQUEST DETAILS\n");
    printf("====================================\n");

    printf("Patient Name   : %s\n", request.patientName);
    printf("Blood Group    : %s\n", request.bloodGroup);
    printf("Units Required : %d\n", request.units);
    printf("Hospital       : %s\n", request.hospital);
    printf("Contact Number : %s\n", request.contact);

    printf("\nBlood request submitted successfully!\n");

    return 0;
}
