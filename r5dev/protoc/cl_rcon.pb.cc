// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cl_rcon.proto

#include "cl_rcon.pb.h"

#include <algorithm>

#include <thirdparty/protobuf/io/coded_stream.h>
#include <thirdparty/protobuf/extension_set.h>
#include <thirdparty/protobuf/wire_format_lite.h>
#include <thirdparty/protobuf/descriptor.h>
#include <thirdparty/protobuf/generated_message_reflection.h>
#include <thirdparty/protobuf/reflection_ops.h>
#include <thirdparty/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <thirdparty/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace cl_rcon {
constexpr request::request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : requestbuf_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , requestval_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , requestid_(0)
  , requesttype_(0)
{}
struct requestDefaultTypeInternal {
  constexpr requestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~requestDefaultTypeInternal() {}
  union {
    request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT requestDefaultTypeInternal _request_default_instance_;
}  // namespace cl_rcon
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cl_5frcon_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_cl_5frcon_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cl_5frcon_2eproto = nullptr;

const uint32_t TableStruct_cl_5frcon_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, requestid_),
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, requesttype_),
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, requestbuf_),
  PROTOBUF_FIELD_OFFSET(::cl_rcon::request, requestval_),
  2,
  3,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::cl_rcon::request)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cl_rcon::_request_default_instance_),
};

const char descriptor_table_protodef_cl_5frcon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcl_rcon.proto\022\007cl_rcon\"m\n\007request\022\021\n\tr"
  "equestID\030\001 \001(\005\022\'\n\013requestType\030\002 \001(\0162\022.cl"
  "_rcon.request_t\022\022\n\nrequestBuf\030\003 \001(\t\022\022\n\nr"
  "equestVal\030\004 \001(\t*\333\001\n\trequest_t\022\034\n\030SERVERD"
  "ATA_REQUEST_VALUE\020\000\022\037\n\033SERVERDATA_REQUES"
  "T_SETVALUE\020\001\022\"\n\036SERVERDATA_REQUEST_EXECC"
  "OMMAND\020\002\022\033\n\027SERVERDATA_REQUEST_AUTH\020\003\022\'\n"
  "#SERVERDATA_REQUEST_SEND_CONSOLE_LOG\020\004\022%"
  "\n!SERVERDATA_REQUEST_SEND_REMOTEBUG\020\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cl_5frcon_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cl_5frcon_2eproto = {
  false, false, 357, descriptor_table_protodef_cl_5frcon_2eproto, "cl_rcon.proto", 
  &descriptor_table_cl_5frcon_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_cl_5frcon_2eproto::offsets,
  file_level_metadata_cl_5frcon_2eproto, file_level_enum_descriptors_cl_5frcon_2eproto, file_level_service_descriptors_cl_5frcon_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_cl_5frcon_2eproto_getter() {
  return &descriptor_table_cl_5frcon_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_cl_5frcon_2eproto(&descriptor_table_cl_5frcon_2eproto);
namespace cl_rcon {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* request_t_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cl_5frcon_2eproto);
  return file_level_enum_descriptors_cl_5frcon_2eproto[0];
}
bool request_t_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class request::_Internal {
 public:
  using HasBits = decltype(std::declval<request>()._has_bits_);
  static void set_has_requestid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_requesttype(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_requestbuf(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_requestval(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

request::request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:cl_rcon.request)
}
request::request(const request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  requestbuf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    requestbuf_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_requestbuf()) {
    requestbuf_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_requestbuf(), 
      GetArenaForAllocation());
  }
  requestval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    requestval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_requestval()) {
    requestval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_requestval(), 
      GetArenaForAllocation());
  }
  ::memcpy(&requestid_, &from.requestid_,
    static_cast<size_t>(reinterpret_cast<char*>(&requesttype_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
  // @@protoc_insertion_point(copy_constructor:cl_rcon.request)
}

inline void request::SharedCtor() {
requestbuf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  requestbuf_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
requestval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  requestval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&requestid_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&requesttype_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
}

request::~request() {
  // @@protoc_insertion_point(destructor:cl_rcon.request)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  requestbuf_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requestval_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void request::ArenaDtor(void* object) {
  request* _this = reinterpret_cast< request* >(object);
  (void)_this;
}
void request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void request::Clear() {
// @@protoc_insertion_point(message_clear_start:cl_rcon.request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      requestbuf_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      requestval_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&requestid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&requesttype_) -
        reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 requestID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_requestid(&has_bits);
          requestid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .cl_rcon.request_t requestType = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::cl_rcon::request_t_IsValid(val))) {
            _internal_set_requesttype(static_cast<::cl_rcon::request_t>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional string requestBuf = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_requestbuf();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "cl_rcon.request.requestBuf");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string requestVal = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_requestval();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "cl_rcon.request.requestVal");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cl_rcon.request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 requestID = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_requestid(), target);
  }

  // optional .cl_rcon.request_t requestType = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_requesttype(), target);
  }

  // optional string requestBuf = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_requestbuf().data(), static_cast<int>(this->_internal_requestbuf().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "cl_rcon.request.requestBuf");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_requestbuf(), target);
  }

  // optional string requestVal = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_requestval().data(), static_cast<int>(this->_internal_requestval().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "cl_rcon.request.requestVal");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_requestval(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cl_rcon.request)
  return target;
}

size_t request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cl_rcon.request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string requestBuf = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_requestbuf());
    }

    // optional string requestVal = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_requestval());
    }

    // optional int32 requestID = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_requestid());
    }

    // optional .cl_rcon.request_t requestType = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_requesttype());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*request::GetClassData() const { return &_class_data_; }

void request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<request *>(to)->MergeFrom(
      static_cast<const request &>(from));
}


void request::MergeFrom(const request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cl_rcon.request)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_requestbuf(from._internal_requestbuf());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_requestval(from._internal_requestval());
    }
    if (cached_has_bits & 0x00000004u) {
      requestid_ = from.requestid_;
    }
    if (cached_has_bits & 0x00000008u) {
      requesttype_ = from.requesttype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void request::CopyFrom(const request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cl_rcon.request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  return true;
}

void request::InternalSwap(request* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &requestbuf_, lhs_arena,
      &other->requestbuf_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &requestval_, lhs_arena,
      &other->requestval_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(request, requesttype_)
      + sizeof(request::requesttype_)
      - PROTOBUF_FIELD_OFFSET(request, requestid_)>(
          reinterpret_cast<char*>(&requestid_),
          reinterpret_cast<char*>(&other->requestid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata request::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_cl_5frcon_2eproto_getter, &descriptor_table_cl_5frcon_2eproto_once,
      file_level_metadata_cl_5frcon_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace cl_rcon
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cl_rcon::request* Arena::CreateMaybeMessage< ::cl_rcon::request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cl_rcon::request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <thirdparty/protobuf/port_undef.inc>