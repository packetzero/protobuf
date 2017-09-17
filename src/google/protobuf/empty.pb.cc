// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/empty.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/empty.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
class EmptyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Empty> {
} _Empty_default_instance_;

namespace protobuf_google_2fprotobuf_2fempty_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Empty)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Empty_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/empty.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _Empty_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION_FOR("google/protobuf/empty");

  ::google::protobuf::internal::InitProtobufDefaults();
  _Empty_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\033google/protobuf/empty.proto\022\017google.pr"
      "otobuf\"\007\n\005EmptyBv\n\023com.google.protobufB\n"
      "EmptyProtoP\001Z\'github.com/golang/protobuf"
      "/ptypes/empty\370\001\001\242\002\003GPB\252\002\036Google.Protobuf"
      ".WellKnownTypesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/empty.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2fempty_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Empty::Empty()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Empty)
}
Empty::Empty(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Empty)
}
Empty::Empty(const Empty& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Empty)
}

void Empty::SharedCtor() {
  _cached_size_ = 0;
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:google.protobuf.Empty)
  SharedDtor();
}

void Empty::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Empty::ArenaDtor(void* object) {
  Empty* _this = reinterpret_cast< Empty* >(object);
  (void)_this;
}
void Empty::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Empty::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Empty::descriptor() {
  protobuf_google_2fprotobuf_2fempty_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2fempty_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Empty& Empty::default_instance() {
  protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaults();
  return *internal_default_instance();
}

Empty* Empty::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Empty>(arena);
}

void Empty::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Empty)
}

bool Empty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Empty)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Empty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Empty)
  return false;
#undef DO_
}

void Empty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Empty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_end:google.protobuf.Empty)
}

::google::protobuf::uint8* Empty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Empty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Empty)
  return target;
}

size_t Empty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Empty)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Empty::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  const Empty* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Empty>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Empty)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Empty)
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void Empty::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {
  return true;
}

void Empty::Swap(Empty* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Empty* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Empty::UnsafeArenaSwap(Empty* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Empty::InternalSwap(Empty* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Empty::GetMetadata() const {
  protobuf_google_2fprotobuf_2fempty_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2fempty_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Empty

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
