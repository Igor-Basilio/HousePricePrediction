// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: endpoints.proto
// Protobuf C++ Version: 5.27.0

#include "endpoints.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr pong_::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : msg_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR pong_::pong_(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct pong_DefaultTypeInternal {
  PROTOBUF_CONSTEXPR pong_DefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~pong_DefaultTypeInternal() {}
  union {
    pong_ _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 pong_DefaultTypeInternal _pong__default_instance_;
      template <typename>
PROTOBUF_CONSTEXPR ping_::ping_(::_pbi::ConstantInitialized) {}
struct ping_DefaultTypeInternal {
  PROTOBUF_CONSTEXPR ping_DefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ping_DefaultTypeInternal() {}
  union {
    ping_ _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ping_DefaultTypeInternal _ping__default_instance_;

inline constexpr PredictionRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : location_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        area_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PredictionRequest::PredictionRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PredictionRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PredictionRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PredictionRequestDefaultTypeInternal() {}
  union {
    PredictionRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PredictionRequestDefaultTypeInternal _PredictionRequest_default_instance_;

inline constexpr PredictionReply::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : price_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PredictionReply::PredictionReply(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PredictionReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PredictionReplyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PredictionReplyDefaultTypeInternal() {}
  union {
    PredictionReply _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PredictionReplyDefaultTypeInternal _PredictionReply_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_endpoints_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_endpoints_2eproto = nullptr;
const ::uint32_t
    TableStruct_endpoints_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::ping_, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::pong_, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::pong_, _impl_.msg_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PredictionRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PredictionRequest, _impl_.location_),
        PROTOBUF_FIELD_OFFSET(::PredictionRequest, _impl_.area_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PredictionReply, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PredictionReply, _impl_.price_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::ping_)},
        {8, -1, -1, sizeof(::pong_)},
        {17, -1, -1, sizeof(::PredictionRequest)},
        {27, -1, -1, sizeof(::PredictionReply)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_ping__default_instance_._instance,
    &::_pong__default_instance_._instance,
    &::_PredictionRequest_default_instance_._instance,
    &::_PredictionReply_default_instance_._instance,
};
const char descriptor_table_protodef_endpoints_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\017endpoints.proto\"\007\n\005ping_\"\024\n\005pong_\022\013\n\003m"
    "sg\030\001 \001(\t\"3\n\021PredictionRequest\022\020\n\010locatio"
    "n\030\001 \001(\t\022\014\n\004area\030\002 \001(\002\" \n\017PredictionReply"
    "\022\r\n\005price\030\001 \001(\0022f\n\020house_prediction\0228\n\016P"
    "redictPrice_L\022\022.PredictionRequest\032\020.Pred"
    "ictionReply\"\000\022\030\n\004Ping\022\006.ping_\032\006.pong_\"\000b"
    "\006proto3"
};
static ::absl::once_flag descriptor_table_endpoints_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_endpoints_2eproto = {
    false,
    false,
    247,
    descriptor_table_protodef_endpoints_2eproto,
    "endpoints.proto",
    &descriptor_table_endpoints_2eproto_once,
    nullptr,
    0,
    4,
    schemas,
    file_default_instances,
    TableStruct_endpoints_2eproto::offsets,
    file_level_enum_descriptors_endpoints_2eproto,
    file_level_service_descriptors_endpoints_2eproto,
};
// ===================================================================

class ping_::_Internal {
 public:
};

ping_::ping_(::google::protobuf::Arena* arena)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:ping_)
}
ping_::ping_(
    ::google::protobuf::Arena* arena,
    const ping_& from)
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
  ping_* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:ping_)
}

const ::google::protobuf::MessageLite::ClassData*
ping_::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(ping_, _impl_._cached_size_),
              false,
          },
          &ping_::MergeImpl,
          &ping_::kDescriptorMethods,
          &descriptor_table_endpoints_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 0, 0, 0, 2> ping_::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    0, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967295,  // skipmap
    offsetof(decltype(_table_), field_names),  // no field_entries
    0,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ping__default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::ping_>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }},
  // no field_entries, or aux_entries
  {{
  }},
};









::google::protobuf::Metadata ping_::GetMetadata() const {
  return ::google::protobuf::internal::ZeroFieldsBase::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class pong_::_Internal {
 public:
};

pong_::pong_(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:pong_)
}
inline PROTOBUF_NDEBUG_INLINE pong_::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::pong_& from_msg)
      : msg_(arena, from.msg_),
        _cached_size_{0} {}

pong_::pong_(
    ::google::protobuf::Arena* arena,
    const pong_& from)
    : ::google::protobuf::Message(arena) {
  pong_* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:pong_)
}
inline PROTOBUF_NDEBUG_INLINE pong_::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : msg_(arena),
        _cached_size_{0} {}

inline void pong_::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
pong_::~pong_() {
  // @@protoc_insertion_point(destructor:pong_)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void pong_::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.msg_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
pong_::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(pong_, _impl_._cached_size_),
              false,
          },
          &pong_::MergeImpl,
          &pong_::kDescriptorMethods,
          &descriptor_table_endpoints_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 17, 2> pong_::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_pong__default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::pong_>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string msg = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(pong_, _impl_.msg_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string msg = 1;
    {PROTOBUF_FIELD_OFFSET(pong_, _impl_.msg_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\5\3\0\0\0\0\0\0"
    "pong_"
    "msg"
  }},
};

PROTOBUF_NOINLINE void pong_::Clear() {
// @@protoc_insertion_point(message_clear_start:pong_)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* pong_::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pong_)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    const std::string& _s = this->_internal_msg();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "pong_.msg");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pong_)
  return target;
}

::size_t pong_::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pong_)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_msg());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void pong_::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<pong_*>(&to_msg);
  auto& from = static_cast<const pong_&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pong_)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_msg().empty()) {
    _this->_internal_set_msg(from._internal_msg());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void pong_::CopyFrom(const pong_& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pong_)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void pong_::InternalSwap(pong_* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.msg_, &other->_impl_.msg_, arena);
}

::google::protobuf::Metadata pong_::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class PredictionRequest::_Internal {
 public:
};

PredictionRequest::PredictionRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PredictionRequest)
}
inline PROTOBUF_NDEBUG_INLINE PredictionRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::PredictionRequest& from_msg)
      : location_(arena, from.location_),
        _cached_size_{0} {}

PredictionRequest::PredictionRequest(
    ::google::protobuf::Arena* arena,
    const PredictionRequest& from)
    : ::google::protobuf::Message(arena) {
  PredictionRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.area_ = from._impl_.area_;

  // @@protoc_insertion_point(copy_constructor:PredictionRequest)
}
inline PROTOBUF_NDEBUG_INLINE PredictionRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : location_(arena),
        _cached_size_{0} {}

inline void PredictionRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.area_ = {};
}
PredictionRequest::~PredictionRequest() {
  // @@protoc_insertion_point(destructor:PredictionRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PredictionRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.location_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
PredictionRequest::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(PredictionRequest, _impl_._cached_size_),
              false,
          },
          &PredictionRequest::MergeImpl,
          &PredictionRequest::kDescriptorMethods,
          &descriptor_table_endpoints_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 34, 2> PredictionRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PredictionRequest_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PredictionRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // float area = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 63, 0, PROTOBUF_FIELD_OFFSET(PredictionRequest, _impl_.area_)}},
    // string location = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(PredictionRequest, _impl_.location_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string location = 1;
    {PROTOBUF_FIELD_OFFSET(PredictionRequest, _impl_.location_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // float area = 2;
    {PROTOBUF_FIELD_OFFSET(PredictionRequest, _impl_.area_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
    "\21\10\0\0\0\0\0\0"
    "PredictionRequest"
    "location"
  }},
};

PROTOBUF_NOINLINE void PredictionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:PredictionRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.location_.ClearToEmpty();
  _impl_.area_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* PredictionRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PredictionRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string location = 1;
  if (!this->_internal_location().empty()) {
    const std::string& _s = this->_internal_location();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PredictionRequest.location");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // float area = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_area = this->_internal_area();
  ::uint32_t raw_area;
  memcpy(&raw_area, &tmp_area, sizeof(tmp_area));
  if (raw_area != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_area(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PredictionRequest)
  return target;
}

::size_t PredictionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PredictionRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string location = 1;
  if (!this->_internal_location().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_location());
  }

  // float area = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_area = this->_internal_area();
  ::uint32_t raw_area;
  memcpy(&raw_area, &tmp_area, sizeof(tmp_area));
  if (raw_area != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void PredictionRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<PredictionRequest*>(&to_msg);
  auto& from = static_cast<const PredictionRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PredictionRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_location().empty()) {
    _this->_internal_set_location(from._internal_location());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_area = from._internal_area();
  ::uint32_t raw_area;
  memcpy(&raw_area, &tmp_area, sizeof(tmp_area));
  if (raw_area != 0) {
    _this->_impl_.area_ = from._impl_.area_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PredictionRequest::CopyFrom(const PredictionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PredictionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void PredictionRequest::InternalSwap(PredictionRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.location_, &other->_impl_.location_, arena);
        swap(_impl_.area_, other->_impl_.area_);
}

::google::protobuf::Metadata PredictionRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class PredictionReply::_Internal {
 public:
};

PredictionReply::PredictionReply(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PredictionReply)
}
PredictionReply::PredictionReply(
    ::google::protobuf::Arena* arena, const PredictionReply& from)
    : PredictionReply(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE PredictionReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void PredictionReply::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.price_ = {};
}
PredictionReply::~PredictionReply() {
  // @@protoc_insertion_point(destructor:PredictionReply)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PredictionReply::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
PredictionReply::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(PredictionReply, _impl_._cached_size_),
              false,
          },
          &PredictionReply::MergeImpl,
          &PredictionReply::kDescriptorMethods,
          &descriptor_table_endpoints_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> PredictionReply::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PredictionReply_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PredictionReply>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // float price = 1;
    {::_pbi::TcParser::FastF32S1,
     {13, 63, 0, PROTOBUF_FIELD_OFFSET(PredictionReply, _impl_.price_)}},
  }}, {{
    65535, 65535
  }}, {{
    // float price = 1;
    {PROTOBUF_FIELD_OFFSET(PredictionReply, _impl_.price_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void PredictionReply::Clear() {
// @@protoc_insertion_point(message_clear_start:PredictionReply)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.price_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* PredictionReply::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PredictionReply)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // float price = 1;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_price = this->_internal_price();
  ::uint32_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        1, this->_internal_price(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PredictionReply)
  return target;
}

::size_t PredictionReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PredictionReply)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float price = 1;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_price = this->_internal_price();
  ::uint32_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void PredictionReply::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<PredictionReply*>(&to_msg);
  auto& from = static_cast<const PredictionReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PredictionReply)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_price = from._internal_price();
  ::uint32_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    _this->_impl_.price_ = from._impl_.price_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PredictionReply::CopyFrom(const PredictionReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PredictionReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void PredictionReply::InternalSwap(PredictionReply* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.price_, other->_impl_.price_);
}

::google::protobuf::Metadata PredictionReply::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_endpoints_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
