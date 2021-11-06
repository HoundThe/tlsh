#ifdef __cplusplus
extern "C" {
#endif

struct TLSH;
typedef struct TLSH TLSH;

TLSH *TLSH_new();
void TLSH_update(TLSH *tlsh, const unsigned char *data, unsigned int len);
void TLSH_final(TLSH *tlsh, const unsigned char *data, unsigned int len,
                int fc_cons_option);
const char *TLSH_hash(TLSH *tlsh);
void TLSH_free(TLSH *tlsh);

#ifdef __cplusplus
}
#endif
