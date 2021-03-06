// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MULTINAMESPACES_A_H_
#define FLATBUFFERS_GENERATED_MULTINAMESPACES_A_H_

#include "flatbuffers/flatbuffers.h"

namespace b {

struct B;
struct BT;

}  // namespace b

namespace a {

struct A;
struct AT;

}  // namespace a

namespace b {

inline const flatbuffers::TypeTable *BTypeTable();

}  // namespace b

namespace a {

inline const flatbuffers::TypeTable *ATypeTable();

}  // namespace a

namespace b {

struct BT : public flatbuffers::NativeTable {
  typedef B TableType;
  BT() {
  }
};

struct B FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return BTypeTable();
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
  BT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(BT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<B> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct BBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit BBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  BBuilder &operator=(const BBuilder &);
  flatbuffers::Offset<B> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<B>(end);
    return o;
  }
};

inline flatbuffers::Offset<B> CreateB(
    flatbuffers::FlatBufferBuilder &_fbb) {
  BBuilder builder_(_fbb);
  return builder_.Finish();
}

flatbuffers::Offset<B> CreateB(flatbuffers::FlatBufferBuilder &_fbb, const BT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

}  // namespace b

namespace a {

struct AT : public flatbuffers::NativeTable {
  typedef A TableType;
  flatbuffers::unique_ptr<b::BT> b;
  AT() {
  }
};

struct A FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ATypeTable();
  }
  enum {
    VT_B = 4
  };
  const b::B *b() const {
    return GetPointer<const b::B *>(VT_B);
  }
  b::B *mutable_b() {
    return GetPointer<b::B *>(VT_B);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_B) &&
           verifier.VerifyTable(b()) &&
           verifier.EndTable();
  }
  AT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(AT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<A> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ABuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_b(flatbuffers::Offset<b::B> b) {
    fbb_.AddOffset(A::VT_B, b);
  }
  explicit ABuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ABuilder &operator=(const ABuilder &);
  flatbuffers::Offset<A> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<A>(end);
    return o;
  }
};

inline flatbuffers::Offset<A> CreateA(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<b::B> b = 0) {
  ABuilder builder_(_fbb);
  builder_.add_b(b);
  return builder_.Finish();
}

flatbuffers::Offset<A> CreateA(flatbuffers::FlatBufferBuilder &_fbb, const AT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

}  // namespace a

namespace b {

inline BT *B::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new BT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void B::UnPackTo(BT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
}

inline flatbuffers::Offset<B> B::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateB(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<B> CreateB(flatbuffers::FlatBufferBuilder &_fbb, const BT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  return b::CreateB(
      _fbb);
}

}  // namespace b

namespace a {

inline AT *A::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new AT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void A::UnPackTo(AT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = b(); if (_e) _o->b = flatbuffers::unique_ptr<b::BT>(_e->UnPack(_resolver)); };
}

inline flatbuffers::Offset<A> A::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateA(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<A> CreateA(flatbuffers::FlatBufferBuilder &_fbb, const AT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _b = _o->b ? CreateB(_fbb, _o->b.get(), _rehasher) : 0;
  return a::CreateA(
      _fbb,
      _b);
}

}  // namespace a

namespace b {

inline const flatbuffers::TypeTable *BTypeTable() {
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 0, nullptr, nullptr, nullptr, nullptr
  };
  return &tt;
}

}  // namespace b

namespace a {

inline const flatbuffers::TypeTable *ATypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    b::BTypeTable
  };
  static const char * const names[] = {
    "b"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

}  // namespace a

#endif  // FLATBUFFERS_GENERATED_MULTINAMESPACES_A_H_
