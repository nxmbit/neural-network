#ifndef MATRIXF_S_H
#define MATRIXF_S_H

typedef struct matrixf_s {
    double **tab;
    int rows;
    int cols;
} matrixf_s;

matrixf_s *create_matrix(int rows, int cols);
matrixf_s *matrix_add(const matrixf_s *matrix_1, const matrixf_s *matrix_2);
matrixf_s *matrix_multiply(const matrixf_s *matrix_1, const matrixf_s *matrix_2);
matrixf_s *matrix_subtract(const matrixf_s *matrix_1, const matrixf_s *matrix_2);
matrixf_s *matrix_square_elements(const matrixf_s *matrix);
matrixf_s *split_matrix_column(const matrixf_s *matrix, int n);
double matrixf_column_sum(const matrixf_s *matrix, int n);
void matrixf_free(matrixf_s *matrix);
void matrixf_print(const matrixf_s *matrix, const char *message);

#endif