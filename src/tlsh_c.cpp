#include "tlsh_c.h"
#include "tlsh.h"

TLSH *TLSH_new() { return reinterpret_cast<TLSH *>(new Tlsh); }
void TLSH_update(TLSH *tlsh, const unsigned char *data, unsigned int len) {
  reinterpret_cast<Tlsh *>(tlsh)->update(data, len);
}
void TLSH_final(TLSH *tlsh, const unsigned char *data, unsigned int len,
                int fc_cons_option) {
  reinterpret_cast<Tlsh *>(tlsh)->final(data, len, fc_cons_option);
}
const char *TLSH_hash(TLSH *tlsh) {
  return reinterpret_cast<Tlsh *>(tlsh)->getHash();

  void TLSH_free(TLSH * tlsh) { delete reinterpret_cast<TLSH *>(tlsh); }
}
