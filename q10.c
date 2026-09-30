#include <stdio.h>
 
int main() 
{
    double accuracy, confidence, score, datasetPart;
    long samples;
    int role, flags;
    printf("Accuracy (0-100): ");
    scanf("%lf", &accuracy);
    printf("Confidence (0-100): ");
    scanf("%lf", &confidence);
    printf("Dataset size: ");
    scanf("%ld", &samples);
    printf("Role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);
    printf("Status flags (1=TRAINED, 2=VALIDATED, 4=APPROVED, 8=DEPRECATED): ");
    scanf("%d", &flags);
 
    datasetPart = samples / 1000.0;
    if (datasetPart > 10)
    {
        datasetPart = 10;
    }
    score = accuracy * 0.5 + confidence * 0.3 + datasetPart * 2;
    printf("Model score: %.2f\n", score);
 
    if (flags & 8)
    {
        printf("Rejected: model deprecated\n");
    }
    else if (!(flags & 1))
    {
        printf("Rejected: not trained\n");
    }
    else if (!(flags & 2))
    {
        printf("Rejected: not validated\n");
    }
    else if (!(flags & 4))
    {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70 || confidence < 60)
    {
        printf("Rejected: performance too low\n");
    }
    else if (samples < 5000)
    {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1)
    {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && score < 80)
    {
        printf("Denied: engineer needs higher score\n");
    }
    else
    {
        printf("Approved for deployment\n");
    }
 
    printf("sizeof(accuracy) = %zu\n", sizeof(accuracy));
    printf("sizeof(confidence) = %zu\n", sizeof(confidence));
    printf("sizeof(samples) = %zu\n", sizeof(samples));
    printf("sizeof(role) = %zu\n", sizeof(role));
    printf("sizeof(flags) = %zu\n", sizeof(flags));
    printf("sizeof(score) = %zu\n", sizeof(score));
 
    if (score > (accuracy + confidence) / 2)
    {
        printf("Model score is above the average of accuracy and confidence\n");
    }
    else
    {
        printf("Model score is not above the average of accuracy and confidence\n");
    }
 
    return 0;
}
 

