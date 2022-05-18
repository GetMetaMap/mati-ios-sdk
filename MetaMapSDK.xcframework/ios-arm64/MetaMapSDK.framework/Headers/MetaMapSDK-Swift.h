// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef METAMAPSDK_SWIFT_H
#define METAMAPSDK_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MetaMapSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class NSStream;

SWIFT_CLASS("_TtC10MetaMapSDK19FoundationTransport")
@interface FoundationTransport : NSObject <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;

SWIFT_CLASS("_TtC10MetaMapSDK7MetaMap")
@interface MetaMap : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MetaMap * _Nonnull shared;)
+ (MetaMap * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)showMetaMapFlowWithClientId:(NSString * _Nonnull)clientId flowId:(NSString * _Nullable)flowId metadata:(NSDictionary<NSString *, id> * _Nullable)metadata;
@end

@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC10MetaMapSDK13MetaMapButton")
@interface MetaMapButton : UIButton
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, strong) UIColor * _Nullable buttonColor;
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (void)layoutSubviews;
@end

@protocol MetaMapButtonResultDelegate;

SWIFT_CLASS("_TtC10MetaMapSDK19MetaMapButtonResult")
@interface MetaMapButtonResult : NSObject
@property (nonatomic, weak) id <MetaMapButtonResultDelegate> _Nullable delegate;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MetaMapButtonResult * _Nonnull shared;)
+ (MetaMapButtonResult * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP10MetaMapSDK27MetaMapButtonResultDelegate_")
@protocol MetaMapButtonResultDelegate
- (void)verificationSuccessWithIdentityId:(NSString * _Nullable)identityId verificationID:(NSString * _Nullable)verificationID;
- (void)verificationCancelled;
@end






@class NSData;

/// Concrete implementation of <code>SVGParser</code> that uses Foundation’s <code>XMLParser</code> to parse a given SVG file.
SWIFT_CLASS("_TtC10MetaMapSDK14NSXMLSVGParser")
@interface NSXMLSVGParser : NSXMLParser <NSXMLParserDelegate>
/// :nodoc:
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// The <code>XMLParserDelegate</code> method called when the parser has started parsing an SVG element. This implementation will loop through all supported attributes and dispatch the attribiute value to the given curried function.
- (void)parser:(NSXMLParser * _Nonnull)parser didStartElement:(NSString * _Nonnull)elementName namespaceURI:(NSString * _Nullable)namespaceURI qualifiedName:(NSString * _Nullable)qName attributes:(NSDictionary<NSString *, NSString *> * _Nonnull)attributeDict;
/// The <code>XMLParserDelegate</code> method called when the parser has ended parsing an SVG element. This methods pops the last element parsed off the stack and checks if there is an enclosing container layer. Every valid SVG file is guaranteed to have at least one container layer (at a minimum, a <code>SVGRootElement</code> instance).
/// If the parser has finished parsing a <code>SVGShapeElement</code>, it will resize the parser’s <code>containerLayer</code> bounding box to fit all subpaths
/// If the parser has finished parsing a <code><svg></code> element, that <code>SVGRootElement</code>‘s container layer is added to this parser’s <code>containerLayer</code>.
- (void)parser:(NSXMLParser * _Nonnull)parser didEndElement:(NSString * _Nonnull)elementName namespaceURI:(NSString * _Nullable)namespaceURI qualifiedName:(NSString * _Nullable)qName;
/// The <code>XMLParserDelegate</code> method called when the parser has finished parsing the SVG document. All supported elements and attributes are guaranteed to be dispatched at this point, but there’s no guarantee that all elements have finished parsing.
/// seealso:
/// <code>CanManageAsychronousParsing</code> <code>finishedProcessing(shapeLayer:)</code>
/// seealso:
/// <code>XMLParserDelegate</code> (<code>parserDidEndDocument(_:)</code>)[https://developer.apple.com/documentation/foundation/xmlparserdelegate/1418172-parserdidenddocument]
- (void)parserDidEndDocument:(NSXMLParser * _Nonnull)parser;
/// The <code>XMLParserDelegate</code> method called when the parser has reached a fatal error in parsing. Parsing is stopped if an error is reached and you may want to check that your SVG file passes validation.
/// seealso:
/// <code>XMLParserDelegate</code> (<code>parser(_:parseErrorOccurred:)</code>)[https://developer.apple.com/documentation/foundation/xmlparserdelegate/1412379-parser]
/// seealso:
/// (SVG Validator)[https://validator.w3.org/]
- (void)parser:(NSXMLParser * _Nonnull)parser parseErrorOccurred:(NSError * _Nonnull)parseError;
- (nonnull instancetype)initWithData:(NSData * _Nonnull)data SWIFT_UNAVAILABLE;
@end




@class NSURLSession;
@class NSURLSessionWebSocketTask;

SWIFT_CLASS("_TtC10MetaMapSDK12NativeEngine") SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(ios,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15)
@interface NativeEngine : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didOpenWithProtocol:(NSString * _Nullable)protocol;
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didCloseWithCode:(NSURLSessionWebSocketCloseCode)closeCode reason:(NSData * _Nullable)reason;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A class that represents an emit that will request an ack that has not yet been sent.
/// Call <code>timingOut(after:callback:)</code> to complete the emit
/// Example:
/// \code
/// socket.emitWithAck("myEvent").timingOut(after: 1) {data in
///     ...
/// }
///
/// \endcode
SWIFT_CLASS("_TtC10MetaMapSDK13OnAckCallback")
@interface OnAckCallback : NSObject
/// Completes an emitWithAck. If this isn’t called, the emit never happens.
/// \param seconds The number of seconds before this emit times out if an ack hasn’t been received.
///
/// \param callback The callback called when an ack is received, or when a timeout happens.
/// To check for timeout, use <code>SocketAckStatus</code>’s <code>noAck</code> case.
///
- (void)timingOutAfter:(double)seconds callback:(void (^ _Nonnull)(NSArray * _Nonnull))callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A <code>CAShapeLayer</code> subclass that allows you to easily work with sublayers and get sizing information
SWIFT_CLASS("_TtC10MetaMapSDK8SVGLayer")
@interface SVGLayer : CAShapeLayer
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface SVGLayer (SWIFT_EXTENSION(MetaMapSDK))
/// Applies the given fill color to all sublayers
@property (nonatomic) CGColorRef _Nullable fillColor;
@end


@interface SVGLayer (SWIFT_EXTENSION(MetaMapSDK))
/// Applies the given line width to all <code>CAShapeLayer</code>s
@property (nonatomic) CGFloat lineWidth;
/// Applies the given stroke color to all <code>CAShapeLayer</code>s
@property (nonatomic) CGColorRef _Nullable strokeColor;
@end


SWIFT_CLASS("_TtC10MetaMapSDK7SVGView")
@interface SVGView : UIView
/// The name of the SVG file in the main bundle
@property (nonatomic, copy) IBInspectable NSString * _Nullable svgName;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class SocketRawAckView;

/// A class that represents a waiting ack call.
/// <em>NOTE</em>: You should not store this beyond the life of the event handler.
SWIFT_CLASS("_TtC10MetaMapSDK16SocketAckEmitter")
@interface SocketAckEmitter : NSObject
/// A view into this emitter where emits do not check for binary data.
/// Usage:
/// \code
/// ack.rawEmitView.with(myObject)
///
/// \endcode<em>NOTE</em>: It is not safe to hold on to this view beyond the life of the socket.
@property (nonatomic, readonly, strong) SocketRawAckView * _Nonnull rawEmitView;
/// Call to ack receiving this event.
/// \param items An array of items to send when acking. Use <code>[]</code> to send nothing.
///
- (void)with:(NSArray * _Nonnull)items;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Represents some event that was received.
SWIFT_CLASS("_TtC10MetaMapSDK14SocketAnyEvent")
@interface SocketAnyEvent : NSObject
/// The event name.
@property (nonatomic, readonly, copy) NSString * _Nonnull event;
/// The data items for this event.
@property (nonatomic, readonly, copy) NSArray * _Nullable items;
/// The description of this event.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The class that handles the engine.io protocol and transports.
/// See <code>SocketEnginePollable</code> and <code>SocketEngineWebsocket</code> for transport specific methods.
SWIFT_CLASS("_TtC10MetaMapSDK12SocketEngine")
@interface SocketEngine : NSObject <NSURLSessionDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// Declares that a type will be a delegate to an engine.
SWIFT_PROTOCOL("_TtP10MetaMapSDK18SocketEngineClient_")
@protocol SocketEngineClient
/// Called when the engine errors.
/// \param reason The reason the engine errored.
///
- (void)engineDidErrorWithReason:(NSString * _Nonnull)reason;
/// Called when the engine closes.
/// \param reason The reason that the engine closed.
///
- (void)engineDidCloseWithReason:(NSString * _Nonnull)reason;
/// Called when the engine opens.
/// \param reason The reason the engine opened.
///
- (void)engineDidOpenWithReason:(NSString * _Nonnull)reason;
/// Called when the engine receives a ping message. Only called in socket.io >3.
- (void)engineDidReceivePing;
/// Called when the engine receives a pong message. Only called in socket.io 2.
- (void)engineDidReceivePong;
/// Called when the engine sends a ping to the server. Only called in socket.io 2.
- (void)engineDidSendPing;
/// Called when the engine sends a pong to the server. Only called in socket.io >3.
- (void)engineDidSendPong;
/// Called when the engine has a message that must be parsed.
/// \param msg The message that needs parsing.
///
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
/// Called when the engine receives binary data.
/// \param data The data the engine received.
///
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
/// Called when when upgrading the http connection to a websocket connection.
/// \param headers The http headers.
///
- (void)engineDidWebsocketUpgradeWithHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers;
@end

/// Represents the type of engine.io packet types.
typedef SWIFT_ENUM(NSInteger, SocketEnginePacketType, open) {
/// Open message.
  SocketEnginePacketTypeOpen = 0,
/// Close message.
  SocketEnginePacketTypeClose = 1,
/// Ping message.
  SocketEnginePacketTypePing = 2,
/// Pong message.
  SocketEnginePacketTypePong = 3,
/// Regular message.
  SocketEnginePacketTypeMessage = 4,
/// Upgrade message.
  SocketEnginePacketTypeUpgrade = 5,
/// NOOP.
  SocketEnginePacketTypeNoop = 6,
};


/// Represents a socket.io-client.
/// Clients are created through a <code>SocketManager</code>, which owns the <code>SocketEngineSpec</code> that controls the connection to the server.
/// For example:
/// \code
/// // Create a socket for the /swift namespace
/// let socket = manager.socket(forNamespace: "/swift")
///
/// // Add some handlers and connect
///
/// \endcode<em>NOTE</em>: The client is not thread/queue safe, all interaction with the socket should be done on the <code>manager.handleQueue</code>
SWIFT_CLASS("_TtC10MetaMapSDK14SocketIOClient")
@interface SocketIOClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Represents state of a manager or client.
typedef SWIFT_ENUM(NSInteger, SocketIOStatus, open) {
/// The client/manager has never been connected. Or the client has been reset.
  SocketIOStatusNotConnected = 0,
/// The client/manager was once connected, but not anymore.
  SocketIOStatusDisconnected = 1,
/// The client/manager is in the process of connecting.
  SocketIOStatusConnecting = 2,
/// The client/manager is currently connected.
  SocketIOStatusConnected = 3,
};

@class NSURL;

/// A manager for a socket.io connection.
/// A <code>SocketManager</code> is responsible for multiplexing multiple namespaces through a single <code>SocketEngineSpec</code>.
/// Example:
/// \code
/// let manager = SocketManager(socketURL: URL(string:"http://localhost:8080/")!)
/// let defaultNamespaceSocket = manager.defaultSocket
/// let swiftSocket = manager.socket(forNamespace: "/swift")
///
/// // defaultNamespaceSocket and swiftSocket both share a single connection to the server
///
/// \endcodeSockets created through the manager are retained by the manager. So at the very least, a single strong reference
/// to the manager must be maintained to keep sockets alive.
/// To disconnect a socket and remove it from the manager, either call <code>SocketIOClient.disconnect()</code> on the socket,
/// or call one of the <code>disconnectSocket</code> methods on this class.
/// <em>NOTE</em>: The manager is not thread/queue safe, all interaction with the manager should be done on the <code>handleQueue</code>
SWIFT_CLASS("_TtC10MetaMapSDK13SocketManager")
@interface SocketManager : NSObject
/// Not so type safe way to create a SocketIOClient, meant for Objective-C compatiblity.
/// If using Swift it’s recommended to use <code>init(socketURL: NSURL, options: Set<SocketIOClientOption>)</code>
/// \param socketURL The url of the socket.io server.
///
/// \param config The config for this socket.
///
- (nonnull instancetype)initWithSocketURL:(NSURL * _Nonnull)socketURL config:(NSDictionary<NSString *, id> * _Nullable)config;
/// Called when the engine closes.
/// \param reason The reason that the engine closed.
///
- (void)engineDidCloseWithReason:(NSString * _Nonnull)reason;
/// Called when the engine errors.
/// \param reason The reason the engine errored.
///
- (void)engineDidErrorWithReason:(NSString * _Nonnull)reason;
/// Called when the engine opens.
/// \param reason The reason the engine opened.
///
- (void)engineDidOpenWithReason:(NSString * _Nonnull)reason;
/// Called when the engine receives a ping message.
- (void)engineDidReceivePing;
/// Called when the sends a ping to the server.
- (void)engineDidSendPing;
/// Called when the engine receives a pong message.
- (void)engineDidReceivePong;
/// Called when the sends a pong to the server.
- (void)engineDidSendPong;
/// Called when when upgrading the http connection to a websocket connection.
/// \param headers The http headers.
///
- (void)engineDidWebsocketUpgradeWithHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers;
/// Called when the engine has a message that must be parsed.
/// \param msg The message that needs parsing.
///
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
/// Called when the engine receives binary data.
/// \param data The data the engine received.
///
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Class that gives a backwards compatible way to cause an emit not to recursively check for Data objects.
/// Usage:
/// \code
/// ack.rawEmitView.with(myObject)
///
/// \endcode
SWIFT_CLASS("_TtC10MetaMapSDK16SocketRawAckView")
@interface SocketRawAckView : NSObject
/// Call to ack receiving this event.
/// \param items An array of items to send when acking. Use <code>[]</code> to send nothing.
///
- (void)with:(NSArray * _Nonnull)items;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Class that gives a backwards compatible way to cause an emit not to recursively check for Data objects.
/// Usage:
/// \code
/// socket.rawEmitView.emit("myEvent", myObject)
///
/// \endcode
SWIFT_CLASS("_TtC10MetaMapSDK13SocketRawView")
@interface SocketRawView : NSObject
/// Same as emit, but meant for Objective-C
/// \param event The event to send.
///
/// \param items The items to send with this event. Send an empty array to send no data.
///
- (void)emit:(NSString * _Nonnull)event with:(NSArray * _Nonnull)items;
/// Same as emitWithAck, but for Objective-C
/// <em>NOTE</em>: It is up to the server send an ack back, just calling this method does not mean the server will ack.
/// Check that your server’s api will ack the event being sent.
/// Example:
/// \code
/// socket.emitWithAck("myEvent", with: [1]).timingOut(after: 1) {data in
///     ...
/// }
///
/// \endcode\param event The event to send.
///
/// \param items The items to send with this event. Use <code>[]</code> to send nothing.
///
///
/// returns:
/// An <code>OnAckCallback</code>. You must call the <code>timingOut(after:)</code> method before the event will be sent.
- (OnAckCallback * _Nonnull)emitWithAck:(NSString * _Nonnull)event with:(NSArray * _Nonnull)items SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;
@class NSBundle;

SWIFT_CLASS("_TtC10MetaMapSDK31TransparentNavigationController")
@interface TransparentNavigationController : UINavigationController
- (void)viewDidLoad;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
