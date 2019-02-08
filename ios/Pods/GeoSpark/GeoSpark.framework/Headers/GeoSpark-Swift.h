// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GeoSpark",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




SWIFT_CLASS("_TtC8GeoSpark10GSAppState")
@interface GSAppState : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Foreground;)
+ (NSString * _Nonnull)Foreground SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Terminated;)
+ (NSString * _Nonnull)Terminated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Background;)
+ (NSString * _Nonnull)Background SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AlwaysOn;)
+ (NSString * _Nonnull)AlwaysOn SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GeoSpark10GSLocation")
@interface GSLocation : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, copy) NSString * _Null_unspecified activity;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double accuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark8GSMotion")
@interface GSMotion : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull All;)
+ (NSString * _Nonnull)All SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Running;)
+ (NSString * _Nonnull)Running SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Walking;)
+ (NSString * _Nonnull)Walking SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AutoMotive;)
+ (NSString * _Nonnull)AutoMotive SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Stationary;)
+ (NSString * _Nonnull)Stationary SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol GeoSparkDelegate;
@class GeoSparkUser;
@class GeoSparkError;
@class GeoSparkTrip;
@class GeoSparkTrips;
@class GeoSparkGeofence;
@class GeoSparkGeofenceList;

SWIFT_CLASS("_TtC8GeoSpark8GeoSpark")
@interface GeoSpark : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <GeoSparkDelegate> _Null_unspecified delegate;)
+ (id <GeoSparkDelegate> _Null_unspecified)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <GeoSparkDelegate> _Null_unspecified)newValue;
+ (void)intialize:(NSString * _Nonnull)publishKey;
+ (void)setDeviceToken:(NSData * _Nonnull)deviceToken;
+ (void)createUser:(NSString * _Nonnull)userDescription :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)getUser:(NSString * _Nonnull)userID :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startSessionIfNeeded:(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startTracking;
+ (void)stopTracking;
+ (void)startTrip:(NSString * _Nonnull)tripDesc :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)endTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)activeTrips:(void (^ _Nonnull)(GeoSparkTrips * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)createGeofenceWithLatitude:(double)latitude longitude:(double)longitude expiry:(NSInteger)expireTime radius:(NSInteger)radius :(void (^ _Nonnull)(GeoSparkGeofence * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)geofenceList:(void (^ _Nonnull)(GeoSparkGeofenceList * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)setDescription:(NSString * _Nonnull)descriptionString :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)logout:(void (^ _Nonnull)(NSString * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)deleteGeofence:(NSString * _Nonnull)geofence_id :(void (^ _Nonnull)(NSString * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
+ (void)requestLocation;
+ (void)requestMotion;
+ (BOOL)isLocationEnabled SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isLocationTracking SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isMotionEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)trackLocationInAppState:(NSArray<NSString *> * _Nonnull)states;
+ (void)trackLocationInMotion:(NSArray<NSString *> * _Nonnull)motions;
+ (void)setLocationAccuracy:(NSInteger)accuracy;
+ (void)enableLogger:(BOOL)value;
+ (void)getCurrentLocationWithLocation:(void (^ _Nonnull)(GSLocation * _Nonnull))location;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP8GeoSpark16GeoSparkDelegate_")
@protocol GeoSparkDelegate
- (void)didUpdateLocation:(GSLocation * _Nonnull)location;
@end


SWIFT_CLASS("_TtC8GeoSpark13GeoSparkError")
@interface GeoSparkError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark16GeoSparkGeofence")
@interface GeoSparkGeofence : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified geofence_id;
@property (nonatomic, copy) NSString * _Null_unspecified create_at;
@property (nonatomic, copy) NSString * _Null_unspecified expire_at;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified coordinate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class GeoSparkGeofenceListData;

SWIFT_CLASS("_TtC8GeoSpark20GeoSparkGeofenceList")
@interface GeoSparkGeofenceList : NSObject
@property (nonatomic, copy) NSArray<GeoSparkGeofenceListData *> * _Null_unspecified data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark24GeoSparkGeofenceListData")
@interface GeoSparkGeofenceListData : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified expiresAt;
@property (nonatomic) NSInteger geometryRadius;
@property (nonatomic, copy) NSString * _Null_unspecified geofenceId;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified coordinates;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkTrip")
@interface GeoSparkTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified trip_started_at;
@property (nonatomic, copy) NSString * _Null_unspecified trip_ended_at;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class GeoSparkTripsData;

SWIFT_CLASS("_TtC8GeoSpark13GeoSparkTrips")
@interface GeoSparkTrips : NSObject
@property (nonatomic, copy) NSArray<GeoSparkTripsData *> * _Null_unspecified data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark17GeoSparkTripsData")
@interface GeoSparkTripsData : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified tripId;
@property (nonatomic, copy) NSString * _Null_unspecified tripStartedAt;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkUser")
@interface GeoSparkUser : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
