void backtrack ( int l, int iarray[], int &indx, int &k, int &nstack, 
  int stack[], int maxstack );
int bal_seq_check ( int n, int t[] );
int bal_seq_enum ( int n );
int bal_seq_rank ( int n, int t[] );
void bal_seq_successor ( int n, int t[], int &rank );
int *bal_seq_to_tableau ( int n, int t[] );
int *bal_seq_unrank ( int rank, int n );
int *bell_numbers ( int m );
void bell_values ( int *n_data, int *n, int *c );
int binomial ( int n, int k );
double combin ( int n, int k );
void cycle_check ( int n, int ncycle, int t[], int index[] );
int *cycle_to_perm ( int n, int ncycle, int t[], int index[] );
int dist_enum ( int k, int m );
void dist_next ( int k, int m, int q[], bool &more );
int edge_check ( int n_node, int n_edge, int t[] );
int *edge_degree ( int n_node, int n_edge, int t[] );
int edge_enum ( int n_node );
int fall ( int x, int n );
int gray_code_check ( int n, int t[] );
int gray_code_enum ( int n );
int gray_code_rank ( int n, int t[] );
void gray_code_successor ( int n, int t[], int &rank );
int *gray_code_unrank ( int rank, int n );
int i4_factorial ( int n );
void i4_factorial_values ( int &n_data, int &n, int &fn );
int i4_huge ( );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
int i4_uniform ( int a, int b, int *seed );
void i4mat_print ( int m, int n, int a[], string title );
void i4mat_print_some ( int m, int n, int a[], int ilo, int jlo, int ihi,
  int jhi, string title );
void i4vec_backtrack ( int n, int maxstack, int stack[], int x[], int *indx, 
  int *k, int *nstack, int ncan[] );
void i4vec_indicator ( int n, int a[] );
int i4vec_max ( int n, int a[] );
int *i4vec_part1 ( int n, int npart );
void i4vec_part2 ( int n, int npart, int a[] );
int *i4vec_part2_new ( int n, int npart );
void i4vec_print ( int n, int a[], string title );
void i4vec_reverse ( int n, int a[] );
int i4vec_search_binary_a ( int n, int a[], int b );
int i4vec_search_binary_d ( int n, int a[], int b );
void i4vec_sort_insert_a ( int n, int a[] );
void i4vec_sort_insert_d ( int n, int a[] );
int i4vec_sum ( int n, int a[] );
void i4vec_transpose_print ( int n, int a[], string title );
void knapsack_01 ( int n, double mass_limit, double p[], double w[], double x[], 
  double &mass, double &profit );
void knapsack_rational ( int n, double mass_limit, double p[], double w[],
  double x[], double &mass, double &profit );
void knapsack_reorder ( int n, double p[], double w[] );
int ksubset_colex_check ( int k, int n, int t[] );
int ksubset_colex_rank ( int k, int n, int t[] );
void ksubset_colex_successor ( int k, int n, int t[], int &rank );
int *ksubset_colex_unrank ( int rank, int k, int n );
int ksubset_enum ( int k, int n );
int ksubset_lex_check ( int k, int n, int t[] );
int ksubset_lex_rank ( int k, int n, int t[] );
void ksubset_lex_successor ( int k, int n, int t[], int &rank );
int *ksubset_lex_unrank ( int rank, int k, int n );
int ksubset_revdoor_rank ( int k, int n, int t[] );
void ksubset_revdoor_successor ( int k, int n, int t[], int &rank );
int *ksubset_revdoor_unrank ( int rank, int k, int n );
void marriage ( int n, int prefer[], int rank[], int fiancee[], int next[] );
int mountain ( int n, int x, int y );
int npart_enum ( int n, int npart );
int *npart_rsf_lex_random ( int n, int npart, int *seed );
int npart_rsf_lex_rank ( int n, int npart, int a[] );
void npart_rsf_lex_successor ( int n, int npart, int a[], int &rank );
int *npart_rsf_lex_unrank ( int rank, int n, int npart );
void npart_sf_lex_successor ( int n, int npart, int a[], int &rank );
int *npart_table ( int n, int npart );
int part_enum ( int n );
int part_rsf_check ( int n, int npart, int a[] );
void part_sf_check ( int n, int npart, int a[] );
void part_successor ( int n, int &npart, int a[], int &rank );
int *part_table ( int n );
int *partition_greedy ( int n, int a[] );
int partn_enum ( int n, int nmax );
int partn_sf_check ( int n, int nmax, int npart, int a[] );
int *part_sf_conjugate ( int n, int npart, int a[], int &npart2 );
int part_sf_majorize ( int n, int nparta, int a[], int npartb, int b[] );
void partn_successor ( int n, int nmax, int &npart, int a[], int &rank );
void perm_check ( int n, int p[] );
int perm_enum ( int n );
int *perm_inv ( int n, int p[] );
int perm_lex_rank ( int n, int p[] );
void perm_lex_successor ( int n, int p[], int &rank );
int *perm_lex_unrank ( int rank, int n );
int *perm_mul ( int n, int p[], int q[] );
int perm_parity ( int n, int p[] );
void perm_print ( int n, int p[], string title );
int perm_tj_rank ( int n, int p[] );
void perm_tj_successor ( int n, int p[], int &rank );
int *perm_tj_unrank ( int rank, int n );
void perm_to_cycle ( int n, int p[], int &ncycle, int t[], int index[] );
int pruefer_check ( int n, int p[] );
int pruefer_enum ( int n );
int pruefer_rank ( int n, int p[] );
void pruefer_successor ( int n, int p[], int &rank );
void pruefer_to_tree ( int n, int p[], int t[] );
int *pruefer_to_tree_new ( int n, int p[] );
int *pruefer_unrank ( int rank, int n );
void queens ( int n, int iarray[], int k, int &nstack, int istack[], 
  int maxstack );
int r4_nint ( float x );
float r4_uniform ( float a, float b, int *seed );
double r8_abs ( double x );
double r8_add ( double x, double y );
double r8_epsilon ( );
double r8_gamma_log ( double x );
double r8_huge ( );
int r8_nint ( double x );
void r8vec_backtrack ( int n, int maxstack, double stack[], double x[], int *indx, 
  int *k, int *nstack, int ncan[] );
double r8vec_dot_product ( int n, double a1[], double a2[] );
int rgf_check ( int m, int f[] );
int rgf_enum ( int m );
int *rgf_g_table ( int m );
int rgf_rank ( int m, int f[] );
void rgf_successor ( int m, int f[], int &rank );
void rgf_to_setpart ( int m, int f[], int &nsub, int s[], int index[] );
int *rgf_unrank ( int rank, int m );
int s_len_trim ( string s );
int setpart_check ( int m, int nsub, int s[], int index[] );
int setpart_enum ( int m );
int *setpart_to_rgf ( int m, int nsub, int s[], int index[] );
int *stirling_numbers1 ( int m, int n );
int *stirling_numbers2 ( int m, int n );
void subset_check ( int n, int t[] );
int subset_colex_rank ( int n, int t[] );
void subset_colex_successor ( int n, int t[], int &rank );
int *subset_colex_unrank ( int rank, int n );
int *subset_complement ( int n, int a[] );
int subset_distance ( int n, int t1[], int t2[] );
int subset_enum ( int n );
int subset_lex_rank ( int n, int t[] );
void subset_lex_successor ( int n, int t[], int &rank );
int *subset_lex_unrank ( int rank, int n );
int *subset_intersect ( int n, int a[], int b[] );
int *subset_union ( int n, int a[], int b[] );
int subset_weight ( int n, int t[] );
int *subset_xor ( int n, int a[], int b[] );
int subsetsum_swap ( int n, int a[], int sum_desired, int index[] );
void tableau_check ( int n, int tab[] );
int tableau_enum ( int n );
int *tableau_to_bal_seq ( int n, int tab[] );
void timestamp ( );
void tree_check ( int n, int t[] );
int tree_enum ( int n );
int tree_rank ( int n, int t[] );
void tree_successor ( int n, int t[], int &rank );
int *tree_to_pruefer ( int n, int t[] );
int *tree_unrank ( int rank, int n );