#import <Foundation/Foundation.h>

@class MainMainPresenter, MainMainModelImpl, MainExpectSuccess, MainKtor_client_coreHttpClient, MainKotlinUnit, MainKtor_utilsAttributeKey, MainApiException, MainKotlinThrowable, MainKotlinArray, MainJsonKotlinxSerializer, MainKtor_httpOutgoingContent, MainServerApi, MainPlatformSettings, MainKtor_client_coreHttpClientConfig, MainKotlinx_coroutines_core_nativeCoroutineDispatcher, MainKtor_client_coreHttpClientEngineConfig, MainKtor_client_coreHttpReceivePipeline, MainKtor_client_coreHttpRequestPipeline, MainKtor_client_coreHttpResponsePipeline, MainKtor_client_coreHttpSendPipeline, MainKtor_client_coreHttpClientCall, MainKtor_utilsGMTDate, MainKtor_httpHttpStatusCode, MainKtor_httpHttpProtocolVersion, MainKtor_httpContentType, MainKotlinAbstractCoroutineContextElement, MainKtor_client_coreHttpResponseConfig, MainKtor_utilsPipeline, MainKtor_utilsPipelinePhase, MainKotlinx_ioByteOrder, MainKotlinx_coroutines_core_nativeCancellationException, MainKtor_utilsWeekDay, MainKtor_utilsMonth, MainKtor_httpHeaderValueWithParameters, MainKtor_httpHeaderValueParam, MainKotlinx_serialization_runtime_nativeEnumDescriptor, MainKotlinx_serialization_runtime_nativeSerialKind, MainKotlinNothing, MainKotlinx_serialization_runtime_nativeUpdateMode, MainKotlinx_ioCharset, MainKtor_httpHttpMethod, MainKtor_httpUrl, MainKotlinx_ioIoBuffer, MainKotlinEnum, MainKotlinIllegalStateException, MainKotlinRuntimeException, MainKotlinException, MainKotlinx_serialization_runtime_nativeSerialClassDescImpl, MainKotlinx_ioCharsetDecoder, MainKotlinx_ioCharsetEncoder, MainKtor_httpURLProtocol, MainKotlinByteArray, MainKotlinDoubleArray, MainKotlinFloatArray, MainKotlinIntArray, MainKotlinLongArray, MainKotlinShortArray, MainKotlinCharArray, MainKotlinx_coroutines_core_nativeAtomicDesc, MainKotlinByteIterator, MainKotlinDoubleIterator, MainKotlinFloatIterator, MainKotlinIntIterator, MainKotlinLongIterator, MainKotlinShortIterator, MainKotlinCharIterator, MainKotlinx_coroutines_core_nativeAtomicOp, MainKotlinx_coroutines_core_nativeOpDescriptor;

@protocol MainKotlinCoroutineContext, MainMainModel, MainMainView, MainPlatformLogger, MainKtor_client_coreHttpClientFeature, MainKtor_client_coreHttpResponse, MainKtor_client_jsonJsonSerializer, MainKotlinx_serialization_runtime_nativeKSerializer, MainKotlinKClass, MainSettings, MainBaseView, MainKotlinCoroutineContextElement, MainKotlinCoroutineContextKey, MainKotlinx_coroutines_core_nativeCoroutineScope, MainKotlinx_ioCloseable, MainKtor_client_coreHttpClientEngine, MainKtor_utilsAttributes, MainKotlinIterator, MainKotlinx_coroutines_ioByteReadChannel, MainKotlinx_coroutines_core_nativeJob, MainKtor_httpHttpMessage, MainKtor_httpHeaders, MainKotlinx_serialization_runtime_nativeSerializationStrategy, MainKotlinx_serialization_runtime_nativeEncoder, MainKotlinx_serialization_runtime_nativeSerialDescriptor, MainKotlinx_serialization_runtime_nativeDeserializationStrategy, MainKotlinx_serialization_runtime_nativeDecoder, MainKotlinKDeclarationContainer, MainKotlinKAnnotatedElement, MainKotlinKClassifier, MainKotlinContinuationInterceptor, MainKotlinContinuation, MainKotlinx_coroutines_core_nativeRunnable, MainKotlinSuspendFunction2, MainKtor_client_coreHttpRequest, MainKotlinx_coroutines_ioReadSession, MainKotlinx_coroutines_core_nativeChildHandle, MainKotlinx_coroutines_core_nativeChildJob, MainKotlinx_coroutines_core_nativeDisposableHandle, MainKotlinSequence, MainKotlinx_coroutines_core_nativeSelectClause0, MainKotlinComparable, MainKtor_utilsStringValues, MainKotlinMapEntry, MainKotlinx_serialization_runtime_nativeCompositeEncoder, MainKotlinx_serialization_runtime_nativeSerialContext, MainKotlinAnnotation, MainKotlinx_serialization_runtime_nativeCompositeDecoder, MainKotlinSuspendFunction, MainKotlinx_coroutines_core_nativeParentJob, MainKotlinx_coroutines_core_nativeSelectInstance, MainKotlinSuspendFunction0, MainKotlinx_serialization_runtime_nativeGeneratedSerializer, MainKtor_httpParameters, MainKotlinx_ioInput, MainKotlinx_ioOutput, MainKotlinAppendable, MainKotlinx_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainPresenter")))
@interface MainMainPresenter : KotlinBase
- (instancetype)initWithUiContext:(id<MainKotlinCoroutineContext>)uiContext mainModel:(id<MainMainModel>)mainModel __attribute__((swift_name("init(uiContext:mainModel:)"))) __attribute__((objc_designated_initializer));
- (void)bindView:(id<MainMainView>)view __attribute__((swift_name("bind(view:)")));
- (void)unbind __attribute__((swift_name("unbind()")));
- (void)doJob __attribute__((swift_name("doJob()")));
@end;

__attribute__((swift_name("MainModel")))
@protocol MainMainModel
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainModelImpl")))
@interface MainMainModelImpl : KotlinBase <MainMainModel>
- (instancetype)initWithLogger:(id<MainPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol MainKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(MainKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(MainKotlinUnit *(^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MainKtor_utilsAttributeKey *key;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectSuccess")))
@interface MainExpectSuccess : KotlinBase <MainKtor_client_coreHttpClientFeature>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)expectSuccess __attribute__((swift_name("init()")));
- (MainExpectSuccess *)prepareBlock:(MainKotlinUnit *(^)(MainKotlinUnit *))block __attribute__((swift_name("prepare(block:)")));
- (void)installFeature:(MainExpectSuccess *)feature scope:(MainKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MainKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MainKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) MainKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiException")))
@interface MainApiException : MainKotlinThrowable
- (instancetype)initWithResponse:(id<MainKtor_client_coreHttpResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<MainKtor_client_coreHttpResponse> response;
@end;

__attribute__((swift_name("Ktor_client_jsonJsonSerializer")))
@protocol MainKtor_client_jsonJsonSerializer
@required
- (MainKtor_httpOutgoingContent *)writeData:(id)data __attribute__((swift_name("write(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKotlinxSerializer")))
@interface MainJsonKotlinxSerializer : KotlinBase <MainKtor_client_jsonJsonSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setMapperSerializer:(id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("setMapper(serializer:)")));
@property (readonly) MainMutableDictionary<id<MainKotlinKClass>, id<MainKotlinx_serialization_runtime_nativeKSerializer>> *mappers;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerApi")))
@interface MainServerApi : KotlinBase
- (instancetype)initWithLogger:(id<MainPlatformLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *endPoint;
@end;

__attribute__((swift_name("Settings")))
@protocol MainSettings
@required
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
@end;

__attribute__((swift_name("PlatformLogger")))
@protocol MainPlatformLogger
@required
- (void)logExceptionTag:(NSString *)tag text:(NSString *)text exception:(MainKotlinThrowable * _Nullable)exception __attribute__((swift_name("logException(tag:text:exception:)")));
- (void)logTag:(NSString *)tag text:(NSString *)text __attribute__((swift_name("log(tag:text:)")));
@end;

__attribute__((swift_name("BaseView")))
@protocol MainBaseView
@required
- (void)showErrorError:(MainKotlinThrowable *)error __attribute__((swift_name("showError(error:)")));
@end;

__attribute__((swift_name("MainView")))
@protocol MainMainView <MainBaseView>
@required
- (void)onServerResponseSuccess:(BOOL)success __attribute__((swift_name("onServerResponse(success:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSettings")))
@interface MainPlatformSettings : KotlinBase <MainSettings>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MainKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MainKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MainKotlinCoroutineContextElement> _Nullable)getKey:(id<MainKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MainKotlinCoroutineContext>)minusKeyKey:(id<MainKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MainKotlinCoroutineContext>)plusContext:(id<MainKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineScope")))
@protocol MainKotlinx_coroutines_core_nativeCoroutineScope
@required
@property (readonly) id<MainKotlinCoroutineContext> coroutineContext;
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol MainKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MainKtor_client_coreHttpClient : KotlinBase <MainKotlinx_coroutines_core_nativeCoroutineScope, MainKotlinx_ioCloseable>
- (instancetype)initWithEngine:(id<MainKtor_client_coreHttpClientEngine>)engine userConfig:(MainKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (MainKtor_client_coreHttpClient *)configBlock:(MainKotlinUnit *(^)(MainKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<MainKtor_utilsAttributes> attributes;
@property (readonly) MainKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@property (readonly) MainKtor_client_coreHttpClientEngineConfig *engineConfig;
@property (readonly) MainKtor_client_coreHttpReceivePipeline *receivePipeline;
@property (readonly) MainKtor_client_coreHttpRequestPipeline *requestPipeline;
@property (readonly) MainKtor_client_coreHttpResponsePipeline *responsePipeline;
@property (readonly) MainKtor_client_coreHttpSendPipeline *sendPipeline;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MainKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MainKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MainKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol MainKtor_httpHttpMessage
@required
@property (readonly) id<MainKtor_httpHeaders> headers;
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@protocol MainKtor_client_coreHttpResponse <MainKtor_httpHttpMessage, MainKotlinx_coroutines_core_nativeCoroutineScope, MainKotlinx_ioCloseable>
@required
@property (readonly) MainKtor_client_coreHttpClientCall *call;
@property (readonly) id<MainKotlinx_coroutines_ioByteReadChannel> content;
@property (readonly) id<MainKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) MainKtor_utilsGMTDate *requestTime;
@property (readonly) MainKtor_utilsGMTDate *responseTime;
@property (readonly) MainKtor_httpHttpStatusCode *status;
@property (readonly) MainKtor_httpHttpProtocolVersion *version;
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MainKtor_httpOutgoingContent : KotlinBase
- (id _Nullable)getPropertyKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MainKtor_utilsAttributeKey *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) MainLong * _Nullable contentLength;
@property (readonly) MainKtor_httpContentType * _Nullable contentType;
@property (readonly) id<MainKtor_httpHeaders> headers;
@property (readonly) MainKtor_httpHttpStatusCode * _Nullable status;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol MainKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol MainKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol MainKotlinx_serialization_runtime_nativeKSerializer <MainKotlinx_serialization_runtime_nativeSerializationStrategy, MainKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MainKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MainKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MainKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MainKotlinKClass <MainKotlinKDeclarationContainer, MainKotlinKAnnotatedElement, MainKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MainKotlinCoroutineContextElement <MainKotlinCoroutineContext>
@required
@property (readonly) id<MainKotlinCoroutineContextKey> key;
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MainKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MainKtor_client_coreHttpClientEngine <MainKotlinx_coroutines_core_nativeCoroutineScope, MainKotlinx_ioCloseable>
@required
@property (readonly) MainKtor_client_coreHttpClientEngineConfig *config;
@property (readonly) MainKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MainKtor_client_coreHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(MainKotlinUnit *(^)(MainKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MainKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<MainKtor_client_coreHttpClientFeature>)feature configure:(MainKotlinUnit *(^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(MainKotlinUnit *(^)(MainKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MainKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess;
@property BOOL followRedirects;
@property BOOL useDefaultTransformers;
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MainKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MainKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MainKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MainKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MainKtor_utilsAttributeKey *> *allKeys;
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MainKotlinAbstractCoroutineContextElement : KotlinBase <MainKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MainKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MainKotlinContinuationInterceptor <MainKotlinCoroutineContextElement>
@required
- (id<MainKotlinContinuation>)interceptContinuationContinuation:(id<MainKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MainKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineDispatcher")))
@interface MainKotlinx_coroutines_core_nativeCoroutineDispatcher : MainKotlinAbstractCoroutineContextElement <MainKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MainKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<MainKotlinCoroutineContext>)context block:(id<MainKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MainKotlinCoroutineContext>)context block:(id<MainKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<MainKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MainKotlinx_coroutines_core_nativeCoroutineDispatcher *)plusOther:(MainKotlinx_coroutines_core_nativeCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MainKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MainKotlinx_coroutines_core_nativeCoroutineDispatcher * _Nullable dispatcher;
@property BOOL pipelining;
@property (readonly) MainKtor_client_coreHttpResponseConfig *response;
@property int32_t threadsCount;
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MainKtor_utilsPipeline : KotlinBase
- (instancetype)initWithPhase:(MainKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MainKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MainKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MainKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(MainKtor_utilsPipelinePhase *)reference phase:(MainKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MainKtor_utilsPipelinePhase *)reference phase:(MainKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MainKtor_utilsPipelinePhase *)phase block:(id<MainKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(MainKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<MainKtor_utilsAttributes> attributes;
@property (readonly) BOOL isEmpty;
@property (readonly) NSArray<MainKtor_utilsPipelinePhase *> *items;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MainKtor_client_coreHttpReceivePipeline : MainKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MainKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MainKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MainKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MainKtor_client_coreHttpRequestPipeline : MainKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MainKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MainKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MainKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MainKtor_client_coreHttpResponsePipeline : MainKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MainKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MainKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MainKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MainKtor_client_coreHttpSendPipeline : MainKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MainKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MainKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MainKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface MainKtor_client_coreHttpClientCall : KotlinBase <MainKotlinx_coroutines_core_nativeCoroutineScope, MainKotlinx_ioCloseable>
@property (readonly) MainKtor_client_coreHttpClient *client;
@property (readonly) id<MainKtor_client_coreHttpRequest> request;
@property (readonly) id<MainKtor_client_coreHttpResponse> response;
@property (readonly) MainKtor_client_coreHttpResponseConfig *responseConfig;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioByteReadChannel")))
@protocol MainKotlinx_coroutines_ioByteReadChannel
@required
- (BOOL)cancelCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)readSessionConsumer:(MainKotlinUnit *(^)(id<MainKotlinx_coroutines_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)")));
@property (readonly) int32_t availableForRead;
@property (readonly) BOOL isClosedForRead;
@property (readonly) BOOL isClosedForWrite;
@property MainKotlinx_ioByteOrder *readByteOrder;
@property (readonly) int64_t totalBytesRead;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeJob")))
@protocol MainKotlinx_coroutines_core_nativeJob <MainKotlinCoroutineContextElement>
@required
- (id<MainKotlinx_coroutines_core_nativeChildHandle>)attachChildChild:(id<MainKotlinx_coroutines_core_nativeChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)cancelCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancel0 __attribute__((swift_name("cancel0()")));
- (MainKotlinx_coroutines_core_nativeCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MainKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(MainKotlinUnit *(^)(MainKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MainKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionHandler:(MainKotlinUnit *(^)(MainKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<MainKotlinx_coroutines_core_nativeJob>)plusOther_:(id<MainKotlinx_coroutines_core_nativeJob>)other __attribute__((swift_name("plus(other_:)")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MainKotlinSequence> children;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isCancelled;
@property (readonly) BOOL isCompleted;
@property (readonly) id<MainKotlinx_coroutines_core_nativeSelectClause0> onJoin;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MainKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MainKtor_utilsGMTDate : KotlinBase <MainKotlinComparable>
- (int32_t)compareToOther:(MainKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MainKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (MainKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (MainKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MainKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MainKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
@property (readonly) int32_t dayOfMonth;
@property (readonly) MainKtor_utilsWeekDay *dayOfWeek;
@property (readonly) int32_t dayOfYear;
@property (readonly) int32_t hours;
@property (readonly) int32_t minutes;
@property (readonly) MainKtor_utilsMonth *month;
@property (readonly) int32_t seconds;
@property (readonly) int64_t timestamp;
@property (readonly) int32_t year;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MainKtor_httpHttpStatusCode : KotlinBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MainKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MainKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
@property (readonly, getter=description_) NSString *description;
@property (readonly) int32_t value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MainKtor_httpHttpProtocolVersion : KotlinBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MainKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
@property (readonly) int32_t major;
@property (readonly) int32_t minor;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MainKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MainKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(MainKotlinUnit *(^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName;
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MainKtor_httpHeaders <MainKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MainKtor_httpHeaderValueWithParameters : KotlinBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MainKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
@property (readonly) NSString *content;
@property (readonly) NSArray<MainKtor_httpHeaderValueParam *> *parameters;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MainKtor_httpContentType : MainKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MainKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MainKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchPattern:(MainKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MainKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MainKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype;
@property (readonly) NSString *contentType;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol MainKotlinx_serialization_runtime_nativeEncoder
@required
- (id<MainKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<MainKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(MainKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol MainKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<MainKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<MainKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) MainKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol MainKotlinx_serialization_runtime_nativeDecoder
@required
- (id<MainKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(MainKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MainKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol MainKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MainKotlinCoroutineContext> context;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeRunnable")))
@protocol MainKotlinx_coroutines_core_nativeRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface MainKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MainKotlinx_ioCharset *defaultCharset;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MainKtor_utilsPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol MainKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MainKotlinSuspendFunction2 <MainKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol MainKtor_client_coreHttpRequest <MainKtor_httpHttpMessage, MainKotlinx_coroutines_core_nativeCoroutineScope>
@required
@property (readonly) id<MainKtor_utilsAttributes> attributes;
@property (readonly) MainKtor_client_coreHttpClientCall *call;
@property (readonly) MainKtor_httpOutgoingContent *content;
@property (readonly) id<MainKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) MainKtor_httpHttpMethod *method;
@property (readonly) MainKtor_httpUrl *url;
@end;

__attribute__((swift_name("Kotlinx_coroutines_ioReadSession")))
@protocol MainKotlinx_coroutines_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (MainKotlinx_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead;
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MainKotlinEnum : KotlinBase <MainKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MainKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioByteOrder")))
@interface MainKotlinx_ioByteOrder : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainKotlinx_ioByteOrder *bigEndian;
@property (class, readonly) MainKotlinx_ioByteOrder *littleEndian;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainKotlinx_ioByteOrder *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeDisposableHandle")))
@protocol MainKotlinx_coroutines_core_nativeDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildHandle")))
@protocol MainKotlinx_coroutines_core_nativeChildHandle <MainKotlinx_coroutines_core_nativeDisposableHandle>
@required
- (BOOL)childCancelledCause:(MainKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildJob")))
@protocol MainKotlinx_coroutines_core_nativeChildJob <MainKotlinx_coroutines_core_nativeJob>
@required
- (void)parentCancelledParentJob:(id<MainKotlinx_coroutines_core_nativeParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MainKotlinException : MainKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MainKotlinRuntimeException : MainKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MainKotlinIllegalStateException : MainKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCancellationException")))
@interface MainKotlinx_coroutines_core_nativeCancellationException : MainKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol MainKotlinSequence
@required
- (id<MainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectClause0")))
@protocol MainKotlinx_coroutines_core_nativeSelectClause0
@required
- (void)registerSelectClause0Select:(id<MainKotlinx_coroutines_core_nativeSelectInstance>)select block:(id<MainKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MainKtor_utilsWeekDay : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainKtor_utilsWeekDay *monday;
@property (class, readonly) MainKtor_utilsWeekDay *tuesday;
@property (class, readonly) MainKtor_utilsWeekDay *wednesday;
@property (class, readonly) MainKtor_utilsWeekDay *thursday;
@property (class, readonly) MainKtor_utilsWeekDay *friday;
@property (class, readonly) MainKtor_utilsWeekDay *saturday;
@property (class, readonly) MainKtor_utilsWeekDay *sunday;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainKtor_utilsWeekDay *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MainKtor_utilsMonth : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainKtor_utilsMonth *january;
@property (class, readonly) MainKtor_utilsMonth *february;
@property (class, readonly) MainKtor_utilsMonth *march;
@property (class, readonly) MainKtor_utilsMonth *april;
@property (class, readonly) MainKtor_utilsMonth *may;
@property (class, readonly) MainKtor_utilsMonth *june;
@property (class, readonly) MainKtor_utilsMonth *july;
@property (class, readonly) MainKtor_utilsMonth *august;
@property (class, readonly) MainKtor_utilsMonth *september;
@property (class, readonly) MainKtor_utilsMonth *october;
@property (class, readonly) MainKtor_utilsMonth *november;
@property (class, readonly) MainKtor_utilsMonth *december;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainKtor_utilsMonth *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol MainKotlinMapEntry
@required
@property (readonly) id _Nullable key;
@property (readonly) id _Nullable value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MainKtor_httpHeaderValueParam : KotlinBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MainKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol MainKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface MainKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <MainKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<MainKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<MainKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<MainKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface MainKotlinx_serialization_runtime_nativeEnumDescriptor : MainKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(MainKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<MainKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol MainKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<MainKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<MainKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MainKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface MainKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol MainKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MainKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface MainKotlinx_serialization_runtime_nativeUpdateMode : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface MainKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (MainKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (MainKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MainKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MainKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MainKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(MainKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MainKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (MainKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<MainKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MainKtor_httpUrl *)doCopyProtocol:(MainKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MainKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
@property (readonly) NSString *encodedPath;
@property (readonly) NSString *fragment;
@property (readonly) NSString *host;
@property (readonly) id<MainKtor_httpParameters> parameters;
@property (readonly) NSString * _Nullable password;
@property (readonly) int32_t port;
@property (readonly) MainKtor_httpURLProtocol *protocol;
@property (readonly) int32_t specifiedPort;
@property (readonly) BOOL trailingQuery;
@property (readonly) NSString * _Nullable user;
@end;

__attribute__((swift_name("Kotlinx_ioInput")))
@protocol MainKotlinx_ioInput <MainKotlinx_ioCloseable>
@required
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (int32_t)peekToBuffer:(MainKotlinx_ioIoBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int32_t)readAvailableDst:(MainKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length:)")));
- (int32_t)readAvailableDst:(MainKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_:)")));
- (int32_t)readAvailableDst:(MainKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length__:)")));
- (int32_t)readAvailableDst:(MainKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length___:)")));
- (int32_t)readAvailableDst:(MainKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length____:)")));
- (int32_t)readAvailableDst:(MainKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_____:)")));
- (int32_t)readAvailableDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length______:)")));
- (int64_t)readAvailableDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readAvailable(dst:offset:length_______:)")));
- (int32_t)readAvailableDst:(MainKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readAvailable(dst:length:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (void)readFullyDst:(MainKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length:)")));
- (void)readFullyDst:(MainKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_:)")));
- (void)readFullyDst:(MainKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length__:)")));
- (void)readFullyDst:(MainKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length___:)")));
- (void)readFullyDst:(MainKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length____:)")));
- (void)readFullyDst:(MainKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_____:)")));
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length______:)")));
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readFully(dst:offset:length_______:)")));
- (void)readFullyDst:(MainKotlinx_ioIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readFully(dst:length:)")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property MainKotlinx_ioByteOrder *byteOrder;
@property (readonly) BOOL endOfInput;
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol MainKotlinAppendable
@required
- (id<MainKotlinAppendable>)appendC:(unichar)c __attribute__((swift_name("append(c:)")));
- (id<MainKotlinAppendable>)appendCsq:(id _Nullable)csq __attribute__((swift_name("append(csq:)")));
- (id<MainKotlinAppendable>)appendCsq:(id _Nullable)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("append(csq:start:end_:)")));
@end;

__attribute__((swift_name("Kotlinx_ioOutput")))
@protocol MainKotlinx_ioOutput <MainKotlinAppendable, MainKotlinx_ioCloseable>
@required
- (id<MainKotlinAppendable>)appendCsq:(MainKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)fillN:(int64_t)n v:(int8_t)v __attribute__((swift_name("fill(n:v:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
- (void)writeDoubleV:(double)v __attribute__((swift_name("writeDouble(v:)")));
- (void)writeFloatV:(float)v __attribute__((swift_name("writeFloat(v:)")));
- (void)writeFullySrc:(MainKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length:)")));
- (void)writeFullySrc:(MainKotlinDoubleArray *)src offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_:)")));
- (void)writeFullySrc:(MainKotlinFloatArray *)src offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length__:)")));
- (void)writeFullySrc:(MainKotlinIntArray *)src offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length___:)")));
- (void)writeFullySrc:(MainKotlinLongArray *)src offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length____:)")));
- (void)writeFullySrc:(MainKotlinShortArray *)src offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_____:)")));
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length______:)")));
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("writeFully(src:offset:length_______:)")));
- (void)writeFullySrc:(MainKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeFully(src:length:)")));
- (void)writeIntV:(int32_t)v __attribute__((swift_name("writeInt(v:)")));
- (void)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (void)writeShortV:(int16_t)v __attribute__((swift_name("writeShort(v:)")));
@property MainKotlinx_ioByteOrder *byteOrder;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_ioIoBuffer")))
@interface MainKotlinx_ioIoBuffer : KotlinBase <MainKotlinx_ioInput, MainKotlinx_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer));
- (int32_t)appendCharsCsq:(MainKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (BOOL)canWrite __attribute__((swift_name("canWrite()")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (BOOL)isExclusivelyOwned __attribute__((swift_name("isExclusivelyOwned()")));
- (MainKotlinx_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (void)pushBackN:(int32_t)n __attribute__((swift_name("pushBack(n:)")));
- (void)readDst:(MainKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("read(dst:offset:length:)")));
- (int32_t)readDirectBlock:(MainInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool:(id<MainKotlinx_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reserveEndGapN:(int32_t)n __attribute__((swift_name("reserveEndGap(n:)")));
- (void)reserveStartGapN:(int32_t)n __attribute__((swift_name("reserveStartGap(n:)")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)writeArray:(MainKotlinByteArray *)array offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("write(array:offset:length:)")));
- (int32_t)writeBufferSrc:(MainKotlinx_ioIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeBuffer(src:length:)")));
- (int32_t)writeDirectBlock:(MainInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property id _Nullable attachment;
@property (readonly) int32_t capacity;
@property (readonly) int32_t endGap;
@property MainKotlinx_ioIoBuffer * _Nullable next;
@property (readonly) int32_t readRemaining;
@property (readonly) int32_t startGap;
@property (readonly) int32_t writeRemaining;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeParentJob")))
@protocol MainKotlinx_coroutines_core_nativeParentJob <MainKotlinx_coroutines_core_nativeJob>
@required
- (MainKotlinThrowable *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectInstance")))
@protocol MainKotlinx_coroutines_core_nativeSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MainKotlinx_coroutines_core_nativeDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicIfNotSelectedDesc:(MainKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicIfNotSelected(desc:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MainKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(MainKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<MainKotlinContinuation> completion;
@property (readonly) BOOL isSelected;
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MainKotlinSuspendFunction0 <MainKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol MainKotlinx_serialization_runtime_nativeGeneratedSerializer <MainKotlinx_serialization_runtime_nativeKSerializer>
@required
- (MainKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface MainKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(MainKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface MainKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(MainKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MainKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (MainKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
@property (readonly) int32_t defaultPort;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MainKtor_httpParameters <MainKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MainKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainByte *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface MainKotlinDoubleArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainDouble *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface MainKotlinFloatArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainFloat *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface MainKotlinIntArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainInt *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface MainKotlinLongArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainLong *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface MainKotlinShortArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MainShort *(^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface MainKotlinCharArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MainKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_ioObjectPool")))
@protocol MainKotlinx_ioObjectPool <MainKotlinx_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicDesc")))
@interface MainKotlinx_coroutines_core_nativeAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MainKotlinx_coroutines_core_nativeAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MainKotlinx_coroutines_core_nativeAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MainKotlinByteIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinDoubleIterator")))
@interface MainKotlinDoubleIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end;

__attribute__((swift_name("KotlinFloatIterator")))
@interface MainKotlinFloatIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface MainKotlinIntIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface MainKotlinLongIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((swift_name("KotlinShortIterator")))
@interface MainKotlinShortIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface MainKotlinCharIterator : KotlinBase <MainKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeOpDescriptor")))
@interface MainKotlinx_coroutines_core_nativeOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicOp")))
@interface MainKotlinx_coroutines_core_nativeAtomicOp : MainKotlinx_coroutines_core_nativeOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided;
@end;

NS_ASSUME_NONNULL_END
