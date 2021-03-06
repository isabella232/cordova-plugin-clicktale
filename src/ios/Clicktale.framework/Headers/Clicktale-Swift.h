// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
@import AVFoundation;
@import CoreData;
@import CoreImage;
@import Foundation;
@import MapKit;
@import ObjectiveC;
@import UIKit;
@import WebKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Clicktale",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif







typedef SWIFT_ENUM_NAMED(NSInteger, CTConsoleLogLevel, "CTConsoleLogLevel", closed) {
  CTConsoleLogLevelVerbose = 0,
  CTConsoleLogLevelDebug = 1,
  CTConsoleLogLevelInfo = 2,
  CTConsoleLogLevelWarning = 3,
  CTConsoleLogLevelError = 4,
  CTConsoleLogLevelSevere = 5,
  CTConsoleLogLevelNone = 6,
};

typedef SWIFT_ENUM_NAMED(NSInteger, CTRegion, "CTRegion", closed) {
  CTRegionEurope = 0,
  CTRegionUnitedStates = 1,
};

@protocol ClicktaleDelegate;
@class WKWebView;
@class UIWebView;
@class NSArray;

SWIFT_CLASS_NAMED("Clicktale")
@interface Clicktale : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SDKVersion;)
+ (NSString * _Nonnull)SDKVersion SWIFT_WARN_UNUSED_RESULT;
/// A delegate object used to notify the SDK hosting application
/// of significant events
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <ClicktaleDelegate> _Nullable delegate;)
+ (id <ClicktaleDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <ClicktaleDelegate> _Nullable)newValue;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// Initialization of SDK
+ (void)start:(enum CTRegion)region :(NSInteger)projectID :(NSInteger)applicationID;
/// Pause Screen Recording
/// Method should be called on an active visit, otherwise it will be ignored
+ (void)pauseScreenRecording;
/// Resume Screen Recording
/// Method should be called on an active visit, otherwise it will be ignored
+ (void)resumeScreenRecording;
/// Check if screen is currently being recorded
/// Returns true if screen is currently recorded
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isScreenRecording;)
+ (BOOL)isScreenRecording SWIFT_WARN_UNUSED_RESULT;
/// Starts a new page view (screen) with the given name and optionally the
/// page title.
/// This method should be used when Automatic Page Detection is disabled.
/// If this method is called when Automatic Page Detection is enabled,
/// it will be ignored.
/// \param pageName Page name.
///
/// \param pageTitle Page title.
///
+ (void)startPageViewWithNamed:(NSString * _Nonnull)pageName titled:(NSString * _Nullable)pageTitle;
/// Adds a dynamic action done by the user on the current page view.
/// E.G. ???Clicked on Logout???
/// \param actionName The action name to attach to a pageView.
///
+ (void)addDynamicAction:(NSString * _Nonnull)actionName;
/// Binds a web view so that events originating from JavaScript will be
/// tracked by the SDK.
/// Use the following JavaScript in your page to trigger events:
/// Clicktale.addPageAttribute(???attribute name here???);
/// Clicktale.addDynamicAction(???action name here???);
/// Clicktale.startPageView(???page name here???, ???Optional page title here???);
/// \param webView A WKWebView instance to bind and recive events from.
///
+ (void)bindWKWebViewForEventTracking:(WKWebView * _Nonnull)webView;
/// Unbinds a web view to disable communication of events originating from
/// JavaScript.
/// \param webView A WKWebView instance to unbind, if possible.
///
+ (void)unbindWKWebViewForEventTracking:(WKWebView * _Nonnull)webView;
/// Binds a web view so that events originating from JavaScript will be
/// tracked by the SDK.
/// Use the following JavaScript in your page to trigger events:
/// Clicktale.addPageAttribute(???attribute name here???);
/// Clicktale.addDynamicAction(???action name here???);
/// Clicktale.startPageView(???page name here???, ???Optional page title here???);
/// \param webView A UIWebView instance to bind and recive events from.
///
+ (void)bindUIWebViewForEventTracking:(UIWebView * _Nonnull)webView SWIFT_AVAILABILITY(ios,introduced=8.0,obsoleted=12.0,message="This functionality is no longer supported, due to UIWebView deprecation in iOS 12.0");
/// Unbinds a web view to disable communication of events originating from
/// JavaScript.
/// \param webView A UIWebView instance to unbind, if possible.
///
+ (void)unbindUIWebViewForEventTracking:(UIWebView * _Nonnull)webView SWIFT_AVAILABILITY(ios,introduced=8.0,obsoleted=12.0,message="This functionality is no longer supported, due to UIWebView deprecation in iOS 12.0");
/// When called, a Black screen will be shown in the video from now on.
/// To continue recording actual content, call unblockScreenRecording()
/// NOTE: This method should be called on an active visit,
/// otherwise it will be ignored.
+ (void)blockScreenRecording;
/// Return to record actual screen content after a call to blockScreenRecording()
/// NOTE: This method should be called on an active visit,
/// otherwise it will be ignored.
+ (void)unblockScreenRecording;
/// Check if screen recording is currently blocked
/// Returns true if screen is currently hidden
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isScreenRecordingBlocked;)
+ (BOOL)isScreenRecordingBlocked SWIFT_WARN_UNUSED_RESULT;
/// Block recording of all given views.
/// The views will be covered by a black square in the recorded video.
/// \param viewsToBlock An array of views that should be blocked.
///
+ (void)blockWithViews:(NSArray * _Nonnull)viewsToBlock;
/// Stop blocking the given views.
/// \param viewsToUnblock An array of views you want to stop hiding.
///
+ (void)unblockWithViews:(NSArray * _Nonnull)viewsToUnblock;
/// Stop blocking all views.
/// A convenience method to unblock all currently blocked views
+ (void)unblockAllViews;
/// Disable auto blocking for selected UITextField, UITextView and
/// SFSafariViewController collection
/// \param viewsToExpose An array of UITextField/UITextView you want
/// to show and prevent the sdk from auto hidding.
///
+ (void)exposeAutoBlockedViews:(NSArray * _Nonnull)viewsToExpose;
/// Offers the option to opt out \ opt in from being recorded and tracked
/// \param isOptOut A flag to set the optout status (default is NO).
///
+ (void)setOptOut:(BOOL)isOptOut;
/// The current optout state (default is NO).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isOptOut;)
+ (BOOL)isOptOut SWIFT_WARN_UNUSED_RESULT;
/// A link for playing back the currently recorded visit.
/// Used for integrations that require supplying a link for playback.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable visitLink;)
+ (NSString * _Nullable)visitLink SWIFT_WARN_UNUSED_RESULT;
/// The current visitor Id
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) int64_t visitorIdentifier;)
+ (int64_t)visitorIdentifier SWIFT_WARN_UNUSED_RESULT;
/// The current visit Id
/// Visit ID will be -1 if SDK was not started yet.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) int64_t visitIdentifier;)
+ (int64_t)visitIdentifier SWIFT_WARN_UNUSED_RESULT;
/// Sets the console log level
/// \param loglevel log level to be used by the
///
+ (void)setConsoleLogLevelTo:(enum CTConsoleLogLevel)loglevel;
/// This flag is meant to be used by the app developer, for debug purposes.
/// It takes the SDK to store the generated video in the device camera roll
/// in addition to uploading it to the server
+ (void)saveVideoToDevice:(BOOL)enabled;
/// This flag is meant to be used by the app developer, for debug purposes.
/// It tells the SDK to use the new OSLog logging system
+ (void)useOSLogging:(BOOL)enabled;
@end


SWIFT_PROTOCOL_NAMED("ClicktaleDelegate")
@protocol ClicktaleDelegate
@optional
- (void)clicktaleVisitDidStartSuccessfullyFor:(int64_t)visitID visitLink:(NSString * _Nullable)link;
- (void)clicktaleVisitDidFailToStart;
- (void)clicktaleVisitDidEndFor:(int64_t)visitID;
@end





































































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
