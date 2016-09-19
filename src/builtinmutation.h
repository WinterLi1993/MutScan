#ifndef BUILT_IN_MUTATION_H
#define BUILT_IN_MUTATION_H

#include <stdlib.h>
#include <string>

const string BUILT_IN_MUTATIONS = string("#name, left_seq_of_mutation_point, mutation_seq, right_seq_of_mutation_point\n\
KRAS-neg-12-25398281-2-c.38G>C-p.G13A-COSM533, AGCTGTATCGTCAAGGCACTCTTGCCTACG, G, CACCAGCTCCAACTACCACAAGTTTATATT\n\
KRAS-neg-12-25398281-2-c.38G>A-p.G13D-COSM1140132, AGCTGTATCGTCAAGGCACTCTTGCCTACG, T, CACCAGCTCCAACTACCACAAGTTTATATT\n\
KRAS-neg-12-25398281-2-c.38G>T-p.G13V-COSM1152504, AGCTGTATCGTCAAGGCACTCTTGCCTACG, A, CACCAGCTCCAACTACCACAAGTTTATATT\n\
KRAS-neg-12-25398282-2-c.37G>T-p.G13C-COSM1152505, GCTGTATCGTCAAGGCACTCTTGCCTACGC, A, ACCAGCTCCAACTACCACAAGTTTATATTC\n\
KRAS-neg-12-25398282-2-c.37G>A-p.G13S-COSM528, GCTGTATCGTCAAGGCACTCTTGCCTACGC, T, ACCAGCTCCAACTACCACAAGTTTATATTC\n\
KRAS-neg-12-25398284-2-c.35G>A-p.G12D-COSM521, TGTATCGTCAAGGCACTCTTGCCTACGCCA, T, CAGCTCCAACTACCACAAGTTTATATTCAG\n\
KRAS-neg-12-25398284-2-c.35G>T-p.G12V-COSM1140133, TGTATCGTCAAGGCACTCTTGCCTACGCCA, A, CAGCTCCAACTACCACAAGTTTATATTCAG\n\
KRAS-neg-12-25398284-2-c.35G>C-p.G12A-COSM522, TGTATCGTCAAGGCACTCTTGCCTACGCCA, G, CAGCTCCAACTACCACAAGTTTATATTCAG\n\
KRAS-neg-12-25398285-2-c.34G>T-p.G12C-COSM516, GTATCGTCAAGGCACTCTTGCCTACGCCAC, A, AGCTCCAACTACCACAAGTTTATATTCAGT\n\
KRAS-neg-12-25398285-2-c.34G>C-p.G12R-COSM518, GTATCGTCAAGGCACTCTTGCCTACGCCAC, G, AGCTCCAACTACCACAAGTTTATATTCAGT\n\
KRAS-neg-12-25398285-2-c.34G>A-p.G12S-COSM1152506, GTATCGTCAAGGCACTCTTGCCTACGCCAC, T, AGCTCCAACTACCACAAGTTTATATTCAGT\n\
NRAS-neg-1-115256529-3-c.182A>G-p.Q61R-COSM584, TATTGGTCTCTCATGGCACTGTACTCTTCT, C, GTCCAGCTGTATCCAGTATGTCCAACAAAC\n\
NRAS-neg-1-115256530-3-c.181C>A-p.Q61K-COSM580, ATTGGTCTCTCATGGCACTGTACTCTTCTT, T, TCCAGCTGTATCCAGTATGTCCAACAAACA\n\
NRAS-neg-1-115258747-2-c.35G>C-p.G12A-COSM565, TGGATTGTCAGTGCGCTTTTCCCAACACCA, G, CTGCTCCAACCACCACCAGTTTGTACTCAG\n\
NRAS-neg-1-115258747-2-c.35G>A-p.G12D-COSM564, TGGATTGTCAGTGCGCTTTTCCCAACACCA, T, CTGCTCCAACCACCACCAGTTTGTACTCAG\n\
NRAS-neg-1-115258747-2-c.35G>T-p.G12V-COSM566, TGGATTGTCAGTGCGCTTTTCCCAACACCA, A, CTGCTCCAACCACCACCAGTTTGTACTCAG\n\
NRAS-neg-1-115258748-2-c.34G>T-p.G12C-COSM562, GGATTGTCAGTGCGCTTTTCCCAACACCAC, A, TGCTCCAACCACCACCAGTTTGTACTCAGT\n\
NRAS-neg-1-115258748-2-c.34G>A-p.G12S-COSM563, GGATTGTCAGTGCGCTTTTCCCAACACCAC, T, TGCTCCAACCACCACCAGTTTGTACTCAGT\n\
NRAS-neg-1-115252203-2-c.437C>T-p.A146V-COSM4170228, TGAAAGCTGTACCATACCTGTCTGGTCTTG, A, CTGAGGTTTCAATGAATGGAATCCCGTAAC\n\
BRAF-neg-7-140453136-15-c.1799T>A -V600E-COSM476, AACTGATGGGACCCACTCCATCGAGATTTC, T, CTGTAGCTAGACCAAAATCACCTATTTTTA\n\
EGFR-pos-7-55241677-18-c.2125G>A-p.E709K-COSM12988, CCCAACCAAGCTCTCTTGAGGATCTTGAAG, A, AAACTGAATTCAAAAAGATCAAAGTGCTGG\n\
EGFR-pos-7-55241707-18-c.2155G>A-p.G719S-COSM6252, GAAACTGAATTCAAAAAGATCAAAGTGCTG, A, GCTCCGGTGCGTTCGGCACGGTGTATAAGG\n\
EGFR-pos-7-55241707-18-c.2155G>T-p.G719C-COSM6253, GAAACTGAATTCAAAAAGATCAAAGTGCTG, T, GCTCCGGTGCGTTCGGCACGGTGTATAAGG\n\
EGFR-pos-7-55241708-18-c.2156G>C-p.G719A-COSM6239, AAACTGAATTCAAAAAGATCAAAGTGCTGG, C, CTCCGGTGCGTTCGGCACGGTGTATAAGGT\n\
EGFR-pos-7-55241708-18-c.2156G>A-p.G719D-COSM18425, AAACTGAATTCAAAAAGATCAAAGTGCTGG, A, CTCCGGTGCGTTCGGCACGGTGTATAAGGT\n\
EGFR-pos-7-55242470-19-c.2240T>C-p.L747S-COSM26704, AAGTTAAAATTCCCGTCGCTATCAAGGAAT, C, AAGAGAAGCAACATCTCCGAAAGCCAACAA\n\
EGFR-pos-7-55242511-19-c.2281G>T-p.D761Y-COSM21984, ACATCTCCGAAAGCCAACAAGGAAATCCTC, T, ATGTGAGTTTCTGCTTTGCTGTGTGGGGGT\n\
EGFR-pos-7-55249005-20-c.2303G>T-p.S768I -COSM6241, CCTCCCTCCAGGAAGCCTACGTGATGGCCA, T, CGTGGACAACCCCCACGTGTGCCGCCTGCT\n\
EGFR-pos-7-55249071-20-c.2369C>T-p.T790M-COSM6240, TCTGCCTCACCTCCACCGTGCAGCTCATCA, T, GCAGCTCATGCCCTTCGGCTGCCTCCTGGA\n\
EGFR-pos-7-55249091-20-c.2389T>A-p.C797S-COSM5010368, CAGCTCATCACGCAGCTCATGCCCTTCGGC, A, GCCTCCTGGACTATGTCCGGGAACACAAAG\n\
EGFR-pos-7-55249092-20-c.2390G>C-p.C797S-COSM5010368, AGCTCATCACGCAGCTCATGCCCTTCGGCT, C, CCTCCTGGACTATGTCCGGGAACACAAAGA\n\
EGFR-pos-7-55259502-21-c.2560A>G-p.T854A-COSM28537, CTGGTGAAAACACCGCAGCATGTCAAGATC, G, CAGATTTTGGGCTGGCCAAACTGCTGGGTG\n\
EGFR-pos-7-55259515-21-c.2573T>G-p.L858R-COSM6224, CGCAGCATGTCAAGATCACAGATTTTGGGC, G, GGCCAAACTGCTGGGTGCGGAAGAGAAAGA\n\
EGFR-pos-7-55259524-21-c.2582T>A-p.L861Q-COSM6213, TCAAGATCACAGATTTTGGGCTGGCCAAAC, A, GCTGGGTGCGGAAGAGAAAGAATACCATGC\n\
EGFR-pos-7-55259524-21-c.2582T>G-p.L861R-COSM12374, TCAAGATCACAGATTTTGGGCTGGCCAAAC, G, GCTGGGTGCGGAAGAGAAAGAATACCATGC\n\
PIK3CA-pos-3-178952085-21-c.3140A>G-H1047R-COSM775, AGTATTTCATGAAACAAATGAATGATGCAC, G, TCATGGTGGCTGGACAACAAAAATGGATTG\n\
PIK3CA-pos-3-178952085-21-c.3140A>T-H1047L-COSM776, AGTATTTCATGAAACAAATGAATGATGCAC, T, TCATGGTGGCTGGACAACAAAAATGGATTG\n\
PIK3CA-pos-3-178936091-9-c.1633G>A-E545K-COSM763, TCTACACGAGATCCTCTCTCTGAAATCACT, A, AGCAGGAGAAAGATTTTCTATGGAGTCACA\n\
PIK3CA-pos-3-178936082-9-c.1624G>A-E542K-COSM760, AAAGCAATTTCTACACGAGATCCTCTCTCT, A, AAATCACTGAGCAGGAGAAAGATTTTCTAT\n\
EGFR-pos-7-55242465:55242479-c.2235_2249del15-p.E746_A750delELREA-COSM6223, TGAGAAAGTTAAAATTCCCGTCGCTATCAA, , AACATCTCCGAAAGCCAACAAGGAAATCCT\n\
EGFR-pos-7-55242466:55242480-c.2236_2250del15-p.E746_A750delELREA-COSM6225, GAGAAAGTTAAAATTCCCGTCGCTATCAAG, , ACATCTCCGAAAGCCAACAAGGAAATCCTC\n\
EGFR-pos-7-55242466:55242483-c.2236_2253del18-p.E746_T751delELREAT-COSM12728, GAGAAAGTTAAAATTCCCGTCGCTATCAAG, , TCTCCGAAAGCCAACAAGGAAATCCTCGAT\n\
EGFR-pos-7-55242470:55242487-c.2240_2257del18-p.L747_P753>S-COSM12370, AAGTTAAAATTCCCGTCGCTATCAAGGAAT, , CGAAAGCCAACAAGGAAATCCTCGATGTGA\n\
EGFR-pos-7-55249013:55249014-c.2311_2312insGCGTGGACA-p.D770_N771insSVD-COSM13428, AGGAAGCCTACGTGATGGCCAGCGTGGACA, GCGTGGACA, ACCCCCACGTGTGCCGCCTGCTGGGCATCT");

#endif