#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedAppFeatureDiContainer, SharedCurrentWeatherDiContainer, SharedCurrentWeatherDomainModel, SharedWeatherRepository, SharedCurrentWeatherDataLayerDependencies, SharedCurrentWeatherDomainLayerDependencies, SharedGetCurrentWeatherUseCase, SharedGetSearchedWeatherUseCase, SharedWeatherListItemDomainModel, SharedViewMyWeatherListDomainModel, SharedRealmDatabase, SharedSearchedWeatherObjectCompanion, SharedKbsonBsonObjectId, SharedKotlinx_datetimeInstant, SharedAppDatabase, SharedSearchedWeatherDataModel, SharedWeatherAPIMethods, SharedWeatherAPIEnvironment, SharedWeatherAPICurrentWeatherMethod, SharedWeatherAPIEnvironmentCompanion, SharedWeatherDataModel, SharedWeatherAPI, SharedKotlinArray<T>, SharedLibrary_baseVersionId, SharedKbsonBsonValueCompanion, SharedKbsonBsonValue, SharedKbsonBsonBinary, SharedKbsonBsonBoolean, SharedKbsonBsonMaxKey, SharedKbsonBsonMinKey, SharedKbsonBsonNull, SharedKbsonBsonUndefined, SharedKbsonBsonDBPointer, SharedKbsonBsonDateTime, SharedKbsonBsonDecimal128, SharedKbsonBsonDouble, SharedKbsonBsonInt32, SharedKbsonBsonInt64, SharedKbsonBsonJavaScript, SharedKbsonBsonJavaScriptWithScope, SharedKbsonBsonNumber, SharedKbsonBsonRegularExpression, SharedKbsonBsonString, SharedKbsonBsonSymbol, SharedKbsonBsonTimestamp, SharedKbsonBsonType, SharedKbsonBsonObjectIdCompanion, SharedKotlinByteArray, SharedKotlinx_datetimeInstantCompanion, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedLibrary_baseUpdatePolicy, SharedLibrary_baseInitialRealmFileConfiguration, SharedLibrary_baseLogConfiguration, SharedLibrary_baseSort, SharedKotlinPair<__covariant A, __covariant B>, SharedKbsonBsonBinarySubType, SharedKbsonBsonBinaryCompanion, SharedKbsonBsonBooleanCompanion, SharedKbsonBsonDBPointerCompanion, SharedKbsonBsonDateTimeCompanion, SharedKbsonBsonDecimal128Companion, SharedKbsonBsonDoubleCompanion, SharedKbsonBsonInt32Companion, SharedKbsonBsonInt64Companion, SharedKbsonBsonJavaScriptCompanion, SharedKbsonBsonJavaScriptWithScopeCompanion, SharedKbsonBsonRegularExpressionCompanion, SharedKbsonBsonStringCompanion, SharedKbsonBsonSymbolCompanion, SharedKbsonBsonTimestampCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinByteIterator, SharedLibrary_baseLogLevel, SharedLibrary_baseRealmClassKind, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedLibrary_baseRealmStorageType;

@protocol SharedPlatform, SharedUUIDString, SharedNetworkRequesterInterface, SharedCancellableInterface, SharedGetCurrentWeatherRepositoryInterface, SharedKotlinKClass, SharedLibrary_baseRealm, SharedLibrary_baseDeleteable, SharedLibrary_baseBaseRealmObject, SharedLibrary_baseTypedRealmObject, SharedLibrary_baseRealmObject, SharedLibrary_baseRealmInstant, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKotlinx_coroutines_coreFlow, SharedLibrary_baseMutableRealm, SharedLibrary_baseConfiguration, SharedLibrary_baseRealmQuery, SharedLibrary_baseRealmSchema, SharedLibrary_baseVersioned, SharedLibrary_baseBaseRealm, SharedLibrary_baseTypedRealm, SharedKotlinComparable, SharedKotlinx_coroutines_coreFlowCollector, SharedLibrary_baseCompactOnLaunchCallback, SharedLibrary_baseInitialDataCallback, SharedLibrary_baseRealmScalarQuery, SharedLibrary_baseRealmSingleQuery, SharedLibrary_baseRealmScalarNullableQuery, SharedLibrary_baseRealmElementQuery, SharedKotlinIterator, SharedLibrary_baseRealmClass, SharedKotlinx_serialization_coreKSerializer, SharedLibrary_baseRealmLogger, SharedLibrary_baseRealmProperty, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedLibrary_baseRealmPropertyType, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("UUIDString")))
@protocol SharedUUIDString
@required
- (NSString *)doNewUUIDString __attribute__((swift_name("doNewUUIDString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSUUIDString")))
@interface SharedIOSUUIDString : SharedBase <SharedUUIDString>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)doNewUUIDString __attribute__((swift_name("doNewUUIDString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewYear")))
@interface SharedNewYear : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)daysPhrase __attribute__((swift_name("daysPhrase()")));
- (int32_t)daysUntilNewYear __attribute__((swift_name("daysUntilNewYear()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDiContainer")))
@interface SharedAppDiContainer : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedAppFeatureDiContainer *feature __attribute__((swift_name("feature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppFeatureDiContainer")))
@interface SharedAppFeatureDiContainer : SharedBase
- (instancetype)initWithCurrentWeather:(SharedCurrentWeatherDiContainer *)currentWeather __attribute__((swift_name("init(currentWeather:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedCurrentWeatherDiContainer *currentWeather __attribute__((swift_name("currentWeather")));
@end

__attribute__((swift_name("GetCurrentWeatherRepositoryInterface")))
@protocol SharedGetCurrentWeatherRepositoryInterface
@required
- (id<SharedCancellableInterface>)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentWeatherRepository")))
@interface SharedGetCurrentWeatherRepository : SharedBase <SharedGetCurrentWeatherRepositoryInterface>
- (instancetype)initWithWeatherRepository:(SharedWeatherRepository *)weatherRepository __attribute__((swift_name("init(weatherRepository:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCancellableInterface>)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreSearchedWeatherRepository")))
@interface SharedStoreSearchedWeatherRepository : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDataLayerDependencies")))
@interface SharedCurrentWeatherDataLayerDependencies : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
- (id<SharedGetCurrentWeatherRepositoryInterface>)getCurrentWeatherRepository __attribute__((swift_name("getCurrentWeatherRepository()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDiContainer")))
@interface SharedCurrentWeatherDiContainer : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedCurrentWeatherDataLayerDependencies *dataLayer __attribute__((swift_name("dataLayer")));
@property (readonly) SharedCurrentWeatherDomainLayerDependencies *domainLayer __attribute__((swift_name("domainLayer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDomainLayerDependencies")))
@interface SharedCurrentWeatherDomainLayerDependencies : SharedBase
- (instancetype)initWithDataLayer:(SharedCurrentWeatherDataLayerDependencies *)dataLayer __attribute__((swift_name("init(dataLayer:)"))) __attribute__((objc_designated_initializer));
- (SharedGetCurrentWeatherUseCase *)getCurrentWeatherUseCase __attribute__((swift_name("getCurrentWeatherUseCase()")));
- (SharedGetSearchedWeatherUseCase *)getSearchedWeatherUseCase __attribute__((swift_name("getSearchedWeatherUseCase()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeatherDomainModel")))
@interface SharedCurrentWeatherDomainModel : SharedBase
- (instancetype)initWithCity:(NSString *)city state:(NSString *)state temperatureInFahrenheit:(NSString *)temperatureInFahrenheit __attribute__((swift_name("init(city:state:temperatureInFahrenheit:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *temperatureInFahrenheit __attribute__((swift_name("temperatureInFahrenheit")));
@end

__attribute__((swift_name("StoreSearchedWeatherRepositoryInterface")))
@protocol SharedStoreSearchedWeatherRepositoryInterface
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentWeatherUseCase")))
@interface SharedGetCurrentWeatherUseCase : SharedBase
- (instancetype)initWithGetCurrentWeatherInterface:(id<SharedGetCurrentWeatherRepositoryInterface>)getCurrentWeatherInterface __attribute__((swift_name("init(getCurrentWeatherInterface:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCancellableInterface>)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedCurrentWeatherDomainModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSearchedWeatherUseCase")))
@interface SharedGetSearchedWeatherUseCase : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getLatestSearchesEmitValue:(void (^)(SharedInt *))emitValue __attribute__((swift_name("getLatestSearches(emitValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewMyWeatherListDomainModel")))
@interface SharedViewMyWeatherListDomainModel : SharedBase
- (instancetype)initWithWeatherItems:(NSArray<SharedWeatherListItemDomainModel *> *)weatherItems __attribute__((swift_name("init(weatherItems:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<SharedWeatherListItemDomainModel *> *weatherItems __attribute__((swift_name("weatherItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherListItemDomainModel")))
@interface SharedWeatherListItemDomainModel : SharedBase
- (instancetype)initWithId:(NSString *)id location:(NSString *)location temperature:(NSString *)temperature __attribute__((swift_name("init(id:location:temperature:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *location __attribute__((swift_name("location")));
@property (readonly) NSString *systemClockNow __attribute__((swift_name("systemClockNow")));
@property (readonly) NSString *temperature __attribute__((swift_name("temperature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewMyWeatherListUseCase")))
@interface SharedViewMyWeatherListUseCase : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedViewMyWeatherListDomainModel *)view __attribute__((swift_name("view()")));
@end

__attribute__((swift_name("RealmDatabase")))
@interface SharedRealmDatabase : SharedBase
- (instancetype)initWithSchema:(NSSet<id<SharedKotlinKClass>> *)schema __attribute__((swift_name("init(schema:)"))) __attribute__((objc_designated_initializer));
- (id<SharedLibrary_baseRealm>)openRealm __attribute__((swift_name("openRealm()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabase")))
@interface SharedAppDatabase : SharedRealmDatabase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSchema:(NSSet<id<SharedKotlinKClass>> *)schema __attribute__((swift_name("init(schema:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Library_baseDeleteable")))
@protocol SharedLibrary_baseDeleteable
@required
@end

__attribute__((swift_name("Library_baseBaseRealmObject")))
@protocol SharedLibrary_baseBaseRealmObject <SharedLibrary_baseDeleteable>
@required
@end

__attribute__((swift_name("Library_baseTypedRealmObject")))
@protocol SharedLibrary_baseTypedRealmObject <SharedLibrary_baseBaseRealmObject>
@required
@end

__attribute__((swift_name("Library_baseRealmObject")))
@protocol SharedLibrary_baseRealmObject <SharedLibrary_baseTypedRealmObject>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchedWeatherObject")))
@interface SharedSearchedWeatherObject : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedSearchedWeatherObjectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property id<SharedLibrary_baseRealmInstant> _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString *zipCode __attribute__((swift_name("zipCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchedWeatherObject.Companion")))
@interface SharedSearchedWeatherObjectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSearchedWeatherObjectCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchedWeatherDataModel")))
@interface SharedSearchedWeatherDataModel : SharedBase
- (instancetype)initWithId:(NSString *)id searchDate:(SharedKotlinx_datetimeInstant *)searchDate zipCode:(NSString *)zipCode __attribute__((swift_name("init(id:searchDate:zipCode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedKotlinx_datetimeInstant *searchDate __attribute__((swift_name("searchDate")));
@property (readonly) NSString *zipCode __attribute__((swift_name("zipCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchedWeatherRepository")))
@interface SharedSearchedWeatherRepository : SharedBase
- (instancetype)initWithDatabase:(SharedAppDatabase *)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (SharedSearchedWeatherDataModel *)storeSearchedWeatherZipCode:(NSString *)zipCode __attribute__((swift_name("storeSearchedWeather(zipCode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPI")))
@interface SharedWeatherAPI : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester __attribute__((swift_name("init(networkRequester:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedWeatherAPIMethods *method __attribute__((swift_name("method")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIMethods")))
@interface SharedWeatherAPIMethods : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester environment:(SharedWeatherAPIEnvironment *)environment __attribute__((swift_name("init(networkRequester:environment:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedWeatherAPICurrentWeatherMethod *currentWeather __attribute__((swift_name("currentWeather")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIEnvironment")))
@interface SharedWeatherAPIEnvironment : SharedBase
- (instancetype)initWithApiKey:(NSString *)apiKey baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(apiKey:baseUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedWeatherAPIEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPIEnvironment.Companion")))
@interface SharedWeatherAPIEnvironmentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedWeatherAPIEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (SharedWeatherAPIEnvironment *)production __attribute__((swift_name("production()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAPICurrentWeatherMethod")))
@interface SharedWeatherAPICurrentWeatherMethod : SharedBase
- (instancetype)initWithNetworkRequester:(id<SharedNetworkRequesterInterface>)networkRequester environment:(SharedWeatherAPIEnvironment *)environment __attribute__((swift_name("init(networkRequester:environment:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCancellableInterface>)getCurrentZipCode:(NSString *)zipCode completion:(void (^)(SharedWeatherDataModel *))completion __attribute__((swift_name("getCurrent(zipCode:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherDataModel")))
@interface SharedWeatherDataModel : SharedBase
- (instancetype)initWithLocationName:(NSString *)locationName locationRegion:(NSString *)locationRegion tempFahrenheit:(SharedDouble * _Nullable)tempFahrenheit __attribute__((swift_name("init(locationName:locationRegion:tempFahrenheit:)"))) __attribute__((objc_designated_initializer));
- (SharedWeatherDataModel *)doCopyLocationName:(NSString *)locationName locationRegion:(NSString *)locationRegion tempFahrenheit:(SharedDouble * _Nullable)tempFahrenheit __attribute__((swift_name("doCopy(locationName:locationRegion:tempFahrenheit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *locationName __attribute__((swift_name("locationName")));
@property (readonly) NSString *locationRegion __attribute__((swift_name("locationRegion")));
@property (readonly) SharedDouble * _Nullable tempFahrenheit __attribute__((swift_name("tempFahrenheit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherRepository")))
@interface SharedWeatherRepository : SharedBase
- (instancetype)initWithApi:(SharedWeatherAPI *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCancellableInterface>)getCurrentWeatherZipCode:(NSString *)zipCode completion:(void (^)(SharedWeatherDataModel *))completion __attribute__((swift_name("getCurrentWeather(zipCode:completion:)")));
@end

__attribute__((swift_name("CancellableInterface")))
@protocol SharedCancellableInterface
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("NetworkRequesterInterface")))
@protocol SharedNetworkRequesterInterface
@required
- (id<SharedCancellableInterface>)sendGetRequestUrl:(NSString *)url completion:(void (^)(NSArray<NSDictionary<NSString *, id> *> *))completion __attribute__((swift_name("sendGetRequest(url:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSUUIDStringKt")))
@interface SharedIOSUUIDStringKt : SharedBase
+ (id<SharedUUIDString>)getUUIDString __attribute__((swift_name("getUUIDString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Library_baseVersioned")))
@protocol SharedLibrary_baseVersioned
@required
- (SharedLibrary_baseVersionId *)version __attribute__((swift_name("version()")));
@end

__attribute__((swift_name("Library_baseBaseRealm")))
@protocol SharedLibrary_baseBaseRealm <SharedLibrary_baseVersioned>
@required
- (int64_t)getNumberOfActiveVersions __attribute__((swift_name("getNumberOfActiveVersions()")));
- (BOOL)isClosed __attribute__((swift_name("isClosed()")));
- (id<SharedLibrary_baseRealmSchema>)schema __attribute__((swift_name("schema()")));
- (int64_t)schemaVersion __attribute__((swift_name("schemaVersion()")));
@property (readonly) id<SharedLibrary_baseConfiguration> configuration __attribute__((swift_name("configuration")));
@end

__attribute__((swift_name("Library_baseTypedRealm")))
@protocol SharedLibrary_baseTypedRealm <SharedLibrary_baseBaseRealm>
@required
- (id<SharedLibrary_baseTypedRealmObject>)doCopyFromRealmObj:(id<SharedLibrary_baseTypedRealmObject>)obj depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(obj:depth:)")));
- (NSDictionary<NSString *, id> *)doCopyFromRealmDictionary:(SharedMutableDictionary<NSString *, id> *)dictionary depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(dictionary:depth:)")));
- (NSArray<id<SharedLibrary_baseTypedRealmObject>> *)doCopyFromRealmCollection:(id)collection depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(collection:depth:)")));
- (id<SharedLibrary_baseRealmQuery>)queryClazz:(id<SharedKotlinKClass>)clazz query:(NSString *)query args:(SharedKotlinArray<id> *)args __attribute__((swift_name("query(clazz:query:args:)")));
@end

__attribute__((swift_name("Library_baseRealm")))
@protocol SharedLibrary_baseRealm <SharedLibrary_baseTypedRealm>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeBlock:(id _Nullable (^)(id<SharedLibrary_baseMutableRealm>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("write(block:completionHandler:)")));
- (id _Nullable)writeBlockingBlock:(id _Nullable (^)(id<SharedLibrary_baseMutableRealm>))block __attribute__((swift_name("writeBlocking(block:)")));
- (void)writeCopyToTargetConfiguration:(id<SharedLibrary_baseConfiguration>)targetConfiguration __attribute__((swift_name("writeCopyTo(targetConfiguration:)")));
@end

__attribute__((swift_name("KbsonBsonValue")))
@interface SharedKbsonBsonValue : SharedBase
@property (class, readonly, getter=companion) SharedKbsonBsonValueCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedKbsonBsonValue *> *)asArray __attribute__((swift_name("asArray()")));
- (SharedKbsonBsonBinary *)asBinary __attribute__((swift_name("asBinary()")));
- (SharedKbsonBsonBoolean *)asBoolean __attribute__((swift_name("asBoolean()")));
- (SharedKbsonBsonMaxKey *)asBsonMaxKey __attribute__((swift_name("asBsonMaxKey()")));
- (SharedKbsonBsonMinKey *)asBsonMinKey __attribute__((swift_name("asBsonMinKey()")));
- (SharedKbsonBsonNull *)asBsonNull __attribute__((swift_name("asBsonNull()")));
- (SharedKbsonBsonUndefined *)asBsonUndefined __attribute__((swift_name("asBsonUndefined()")));
- (SharedKbsonBsonDBPointer *)asDBPointer __attribute__((swift_name("asDBPointer()")));
- (SharedKbsonBsonDateTime *)asDateTime __attribute__((swift_name("asDateTime()")));
- (SharedKbsonBsonDecimal128 *)asDecimal128 __attribute__((swift_name("asDecimal128()")));
- (SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)asDocument __attribute__((swift_name("asDocument()")));
- (SharedKbsonBsonDouble *)asDouble __attribute__((swift_name("asDouble()")));
- (SharedKbsonBsonInt32 *)asInt32 __attribute__((swift_name("asInt32()")));
- (SharedKbsonBsonInt64 *)asInt64 __attribute__((swift_name("asInt64()")));
- (SharedKbsonBsonJavaScript *)asJavaScript __attribute__((swift_name("asJavaScript()")));
- (SharedKbsonBsonJavaScriptWithScope *)asJavaScriptWithScope __attribute__((swift_name("asJavaScriptWithScope()")));
- (SharedKbsonBsonNumber *)asNumber __attribute__((swift_name("asNumber()")));
- (SharedKbsonBsonObjectId *)asObjectId __attribute__((swift_name("asObjectId()")));
- (SharedKbsonBsonRegularExpression *)asRegularExpression __attribute__((swift_name("asRegularExpression()")));
- (SharedKbsonBsonString *)asString __attribute__((swift_name("asString()")));
- (SharedKbsonBsonSymbol *)asSymbol __attribute__((swift_name("asSymbol()")));
- (SharedKbsonBsonTimestamp *)asTimestamp __attribute__((swift_name("asTimestamp()")));
- (BOOL)isArray __attribute__((swift_name("isArray()")));
- (BOOL)isBinary __attribute__((swift_name("isBinary()")));
- (BOOL)isBoolean __attribute__((swift_name("isBoolean()")));
- (BOOL)isDBPointer __attribute__((swift_name("isDBPointer()")));
- (BOOL)isDateTime __attribute__((swift_name("isDateTime()")));
- (BOOL)isDecimal128 __attribute__((swift_name("isDecimal128()")));
- (BOOL)isDocument __attribute__((swift_name("isDocument()")));
- (BOOL)isDouble __attribute__((swift_name("isDouble()")));
- (BOOL)isInt32 __attribute__((swift_name("isInt32()")));
- (BOOL)isInt64 __attribute__((swift_name("isInt64()")));
- (BOOL)isJavaScript __attribute__((swift_name("isJavaScript()")));
- (BOOL)isJavaScriptWithScope __attribute__((swift_name("isJavaScriptWithScope()")));
- (BOOL)isMaxKey __attribute__((swift_name("isMaxKey()")));
- (BOOL)isMinKey __attribute__((swift_name("isMinKey()")));
- (BOOL)isNull __attribute__((swift_name("isNull()")));
- (BOOL)isNumber __attribute__((swift_name("isNumber()")));
- (BOOL)isObjectId __attribute__((swift_name("isObjectId()")));
- (BOOL)isRegularExpression __attribute__((swift_name("isRegularExpression()")));
- (BOOL)isString __attribute__((swift_name("isString()")));
- (BOOL)isSymbol __attribute__((swift_name("isSymbol()")));
- (BOOL)isTimestamp __attribute__((swift_name("isTimestamp()")));
- (BOOL)isUndefined __attribute__((swift_name("isUndefined()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId")))
@interface SharedKbsonBsonObjectId : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithTimestamp:(int32_t)timestamp randomValue1:(int32_t)randomValue1 randomValue2:(int16_t)randomValue2 counter:(int32_t)counter __attribute__((swift_name("init(timestamp:randomValue1:randomValue2:counter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonObjectIdCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonObjectId *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((swift_name("Library_baseRealmInstant")))
@protocol SharedLibrary_baseRealmInstant <SharedKotlinComparable>
@required
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface SharedKotlinx_datetimeInstant : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(SharedKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (SharedKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Library_baseMutableRealm")))
@protocol SharedLibrary_baseMutableRealm <SharedLibrary_baseTypedRealm>
@required
- (void)cancelWrite __attribute__((swift_name("cancelWrite()")));
- (id<SharedLibrary_baseRealmObject>)doCopyToRealmInstance:(id<SharedLibrary_baseRealmObject>)instance updatePolicy:(SharedLibrary_baseUpdatePolicy *)updatePolicy __attribute__((swift_name("doCopyToRealm(instance:updatePolicy:)")));
- (void)deleteDeleteable:(id<SharedLibrary_baseDeleteable>)deleteable __attribute__((swift_name("delete(deleteable:)")));
- (void)deleteSchemaClass:(id<SharedKotlinKClass>)schemaClass __attribute__((swift_name("delete(schemaClass:)")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (id<SharedLibrary_baseBaseRealmObject> _Nullable)findLatestObj:(id<SharedLibrary_baseBaseRealmObject>)obj __attribute__((swift_name("findLatest(obj:)")));
@end

__attribute__((swift_name("Library_baseConfiguration")))
@protocol SharedLibrary_baseConfiguration
@required
@property (readonly) id<SharedLibrary_baseCompactOnLaunchCallback> _Nullable compactOnLaunchCallback __attribute__((swift_name("compactOnLaunchCallback")));
@property (readonly) SharedKotlinByteArray * _Nullable encryptionKey __attribute__((swift_name("encryptionKey")));
@property (readonly) BOOL inMemory __attribute__((swift_name("inMemory")));
@property (readonly) id<SharedLibrary_baseInitialDataCallback> _Nullable initialDataCallback __attribute__((swift_name("initialDataCallback")));
@property (readonly) SharedLibrary_baseInitialRealmFileConfiguration * _Nullable initialRealmFileConfiguration __attribute__((swift_name("initialRealmFileConfiguration")));
@property (readonly) SharedLibrary_baseLogConfiguration *log __attribute__((swift_name("log"))) __attribute__((deprecated("Use io.realm.kotlin.log.RealmLog instead.")));
@property (readonly) int64_t maxNumberOfActiveVersions __attribute__((swift_name("maxNumberOfActiveVersions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly, getter=schema_) NSSet<id<SharedKotlinKClass>> *schema __attribute__((swift_name("schema")));
@property (readonly, getter=schemaVersion_) int64_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end

__attribute__((swift_name("Library_baseRealmElementQuery")))
@protocol SharedLibrary_baseRealmElementQuery <SharedLibrary_baseDeleteable>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (NSArray<id<SharedLibrary_baseBaseRealmObject>> *)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmQuery")))
@protocol SharedLibrary_baseRealmQuery <SharedLibrary_baseRealmElementQuery>
@required
- (id<SharedLibrary_baseRealmScalarQuery>)count __attribute__((swift_name("count()")));
- (NSString *)description_ __attribute__((swift_name("description_()")));
- (id<SharedLibrary_baseRealmQuery>)distinctProperty:(NSString *)property extraProperties:(SharedKotlinArray<NSString *> *)extraProperties __attribute__((swift_name("distinct(property:extraProperties:)")));
- (id<SharedLibrary_baseRealmSingleQuery>)first __attribute__((swift_name("first()")));
- (id<SharedLibrary_baseRealmQuery>)limitLimit:(int32_t)limit __attribute__((swift_name("limit(limit:)")));
- (id<SharedLibrary_baseRealmScalarNullableQuery>)maxProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("max(property:type:)")));
- (id<SharedLibrary_baseRealmScalarNullableQuery>)minProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("min(property:type:)")));
- (id<SharedLibrary_baseRealmQuery>)queryFilter:(NSString *)filter arguments:(SharedKotlinArray<id> *)arguments __attribute__((swift_name("query(filter:arguments:)")));
- (id<SharedLibrary_baseRealmQuery>)sortPropertyAndSortOrder:(SharedKotlinPair<NSString *, SharedLibrary_baseSort *> *)propertyAndSortOrder additionalPropertiesAndOrders:(SharedKotlinArray<SharedKotlinPair<NSString *, SharedLibrary_baseSort *> *> *)additionalPropertiesAndOrders __attribute__((swift_name("sort(propertyAndSortOrder:additionalPropertiesAndOrders:)")));
- (id<SharedLibrary_baseRealmQuery>)sortProperty:(NSString *)property sortOrder:(SharedLibrary_baseSort *)sortOrder __attribute__((swift_name("sort(property:sortOrder:)")));
- (id<SharedLibrary_baseRealmScalarQuery>)sumProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("sum(property:type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Library_baseRealmSchema")))
@protocol SharedLibrary_baseRealmSchema
@required
- (id<SharedLibrary_baseRealmClass> _Nullable)getClassName:(NSString *)className __attribute__((swift_name("get(className:)")));
@property (readonly) id classes __attribute__((swift_name("classes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseVersionId")))
@interface SharedLibrary_baseVersionId : SharedBase <SharedKotlinComparable>
- (instancetype)initWithVersion:(int64_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedLibrary_baseVersionId *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedLibrary_baseVersionId *)doCopyVersion:(int64_t)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonValue.Companion")))
@interface SharedKbsonBsonValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonValueCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary")))
@interface SharedKbsonBsonBinary : SharedKbsonBsonValue
- (instancetype)initWithData:(SharedKotlinByteArray *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(int8_t)type data:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(SharedKbsonBsonBinarySubType *)type data_:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBinaryCompanion *companion __attribute__((swift_name("companion")));
- (SharedKbsonBsonBinary *)clone __attribute__((swift_name("clone()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) int8_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean")))
@interface SharedKbsonBsonBoolean : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(BOOL)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBooleanCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonBoolean *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) BOOL value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMaxKey")))
@interface SharedKbsonBsonMaxKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMaxKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMaxKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMinKey")))
@interface SharedKbsonBsonMinKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMinKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMinKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonNull")))
@interface SharedKbsonBsonNull : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonNull *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonNull *VALUE __attribute__((swift_name("VALUE")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonUndefined")))
@interface SharedKbsonBsonUndefined : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonUndefined __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonUndefined *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonUndefined *UNDEFINED __attribute__((swift_name("UNDEFINED")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer")))
@interface SharedKbsonBsonDBPointer : SharedKbsonBsonValue
- (instancetype)initWithNamespace:(NSString *)namespace_ id:(SharedKbsonBsonObjectId *)id __attribute__((swift_name("init(namespace:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDBPointerCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKbsonBsonObjectId *id __attribute__((swift_name("id")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime")))
@interface SharedKbsonBsonDateTime : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128")))
@interface SharedKbsonBsonDecimal128 : SharedKbsonBsonValue
@property (class, readonly, getter=companion) SharedKbsonBsonDecimal128Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) uint64_t high __attribute__((swift_name("high")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));
@property (readonly) BOOL isNaN __attribute__((swift_name("isNaN")));
@property (readonly) BOOL isNegative __attribute__((swift_name("isNegative")));
@property (readonly) uint64_t low __attribute__((swift_name("low")));
@end

__attribute__((swift_name("KbsonBsonNumber")))
@interface SharedKbsonBsonNumber : SharedKbsonBsonValue
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer));
- (double)doubleValue __attribute__((swift_name("doubleValue()")));
- (int32_t)intValue __attribute__((swift_name("intValue()")));
- (int64_t)longValue __attribute__((swift_name("longValue()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble")))
@interface SharedKbsonBsonDouble : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(double)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonDoubleCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDouble *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32")))
@interface SharedKbsonBsonInt32 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt32Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt32 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64")))
@interface SharedKbsonBsonInt64 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt64Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt64 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript")))
@interface SharedKbsonBsonJavaScript : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope")))
@interface SharedKbsonBsonJavaScriptWithScope : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code scope:(SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)scope __attribute__((swift_name("init(code:scope:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptWithScopeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression")))
@interface SharedKbsonBsonRegularExpression : SharedKbsonBsonValue
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSString *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonRegularExpressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString")))
@interface SharedKbsonBsonString : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonStringCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonString *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol")))
@interface SharedKbsonBsonSymbol : SharedKbsonBsonValue
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonSymbolCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp")))
@interface SharedKbsonBsonTimestamp : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeconds:(int32_t)seconds increment:(int32_t)increment __attribute__((swift_name("init(seconds:increment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonTimestampCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonTimestamp *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t inc __attribute__((swift_name("inc")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonType")))
@interface SharedKbsonBsonType : SharedKotlinEnum<SharedKbsonBsonType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonType *endOfDocument __attribute__((swift_name("endOfDocument")));
@property (class, readonly) SharedKbsonBsonType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedKbsonBsonType *string __attribute__((swift_name("string")));
@property (class, readonly) SharedKbsonBsonType *document __attribute__((swift_name("document")));
@property (class, readonly) SharedKbsonBsonType *array __attribute__((swift_name("array")));
@property (class, readonly) SharedKbsonBsonType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonType *undefined __attribute__((swift_name("undefined")));
@property (class, readonly) SharedKbsonBsonType *objectId __attribute__((swift_name("objectId")));
@property (class, readonly) SharedKbsonBsonType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SharedKbsonBsonType *dateTime __attribute__((swift_name("dateTime")));
@property (class, readonly) SharedKbsonBsonType *null __attribute__((swift_name("null")));
@property (class, readonly) SharedKbsonBsonType *regularExpression __attribute__((swift_name("regularExpression")));
@property (class, readonly) SharedKbsonBsonType *dbPointer __attribute__((swift_name("dbPointer")));
@property (class, readonly) SharedKbsonBsonType *javascript __attribute__((swift_name("javascript")));
@property (class, readonly) SharedKbsonBsonType *symbol __attribute__((swift_name("symbol")));
@property (class, readonly) SharedKbsonBsonType *javascriptWithScope __attribute__((swift_name("javascriptWithScope")));
@property (class, readonly) SharedKbsonBsonType *int32 __attribute__((swift_name("int32")));
@property (class, readonly) SharedKbsonBsonType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) SharedKbsonBsonType *int64 __attribute__((swift_name("int64")));
@property (class, readonly) SharedKbsonBsonType *decimal128 __attribute__((swift_name("decimal128")));
@property (class, readonly) SharedKbsonBsonType *minKey __attribute__((swift_name("minKey")));
@property (class, readonly) SharedKbsonBsonType *maxKey __attribute__((swift_name("maxKey")));
+ (SharedKotlinArray<SharedKbsonBsonType *> *)values __attribute__((swift_name("values()")));
- (BOOL)isContainer __attribute__((swift_name("isContainer()")));
@property (readonly) uint8_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId.Companion")))
@interface SharedKbsonBsonObjectIdCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonObjectIdCompanion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonObjectId *)invoke __attribute__((swift_name("invoke()")));
- (SharedKbsonBsonObjectId *)invokeByteArray:(SharedKotlinByteArray *)byteArray __attribute__((swift_name("invoke(byteArray:)")));
- (SharedKbsonBsonObjectId *)invokeTimestamp:(int64_t)timestamp __attribute__((swift_name("invoke(timestamp:)")));
- (SharedKbsonBsonObjectId *)invokeHexString:(NSString *)hexString __attribute__((swift_name("invoke(hexString:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface SharedKotlinx_datetimeInstantCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (SharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (SharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (SharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (SharedKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) SharedKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseUpdatePolicy")))
@interface SharedLibrary_baseUpdatePolicy : SharedKotlinEnum<SharedLibrary_baseUpdatePolicy *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseUpdatePolicy *error __attribute__((swift_name("error")));
@property (class, readonly) SharedLibrary_baseUpdatePolicy *all __attribute__((swift_name("all")));
+ (SharedKotlinArray<SharedLibrary_baseUpdatePolicy *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Library_baseCompactOnLaunchCallback")))
@protocol SharedLibrary_baseCompactOnLaunchCallback
@required
- (BOOL)shouldCompactTotalBytes:(int64_t)totalBytes usedBytes:(int64_t)usedBytes __attribute__((swift_name("shouldCompact(totalBytes:usedBytes:)")));
@end

__attribute__((swift_name("Library_baseInitialDataCallback")))
@protocol SharedLibrary_baseInitialDataCallback
@required
- (void)write:(id<SharedLibrary_baseMutableRealm>)receiver __attribute__((swift_name("write(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseInitialRealmFileConfiguration")))
@interface SharedLibrary_baseInitialRealmFileConfiguration : SharedBase
- (instancetype)initWithAssetFile:(NSString *)assetFile checksum:(NSString * _Nullable)checksum __attribute__((swift_name("init(assetFile:checksum:)"))) __attribute__((objc_designated_initializer));
- (SharedLibrary_baseInitialRealmFileConfiguration *)doCopyAssetFile:(NSString *)assetFile checksum:(NSString * _Nullable)checksum __attribute__((swift_name("doCopy(assetFile:checksum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *assetFile __attribute__((swift_name("assetFile")));
@property (readonly) NSString * _Nullable checksum __attribute__((swift_name("checksum")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseLogConfiguration")))
@interface SharedLibrary_baseLogConfiguration : SharedBase
- (instancetype)initWithLevel:(SharedLibrary_baseLogLevel *)level loggers:(NSArray<id<SharedLibrary_baseRealmLogger>> *)loggers __attribute__((swift_name("init(level:loggers:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use io.realm.kotlin.log.RealmLog instead.")));
- (SharedLibrary_baseLogConfiguration *)doCopyLevel:(SharedLibrary_baseLogLevel *)level loggers:(NSArray<id<SharedLibrary_baseRealmLogger>> *)loggers __attribute__((swift_name("doCopy(level:loggers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLibrary_baseLogLevel *level __attribute__((swift_name("level")));
@property (readonly) NSArray<id<SharedLibrary_baseRealmLogger>> *loggers __attribute__((swift_name("loggers")));
@end

__attribute__((swift_name("Library_baseRealmScalarQuery")))
@protocol SharedLibrary_baseRealmScalarQuery
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (id _Nullable)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmSingleQuery")))
@protocol SharedLibrary_baseRealmSingleQuery <SharedLibrary_baseDeleteable>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (id<SharedLibrary_baseBaseRealmObject> _Nullable)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmScalarNullableQuery")))
@protocol SharedLibrary_baseRealmScalarNullableQuery <SharedLibrary_baseRealmScalarQuery>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseSort")))
@interface SharedLibrary_baseSort : SharedKotlinEnum<SharedLibrary_baseSort *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseSort *ascending __attribute__((swift_name("ascending")));
@property (class, readonly) SharedLibrary_baseSort *descending __attribute__((swift_name("descending")));
+ (SharedKotlinArray<SharedLibrary_baseSort *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Library_baseRealmClass")))
@protocol SharedLibrary_baseRealmClass
@required
- (id<SharedLibrary_baseRealmProperty> _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
@property (readonly) BOOL isEmbedded __attribute__((swift_name("isEmbedded"))) __attribute__((deprecated("This property has been deprecated.")));
@property (readonly) SharedLibrary_baseRealmClassKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedLibrary_baseRealmProperty> _Nullable primaryKey __attribute__((swift_name("primaryKey")));
@property (readonly) id properties __attribute__((swift_name("properties")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinarySubType")))
@interface SharedKbsonBsonBinarySubType : SharedKotlinEnum<SharedKbsonBsonBinarySubType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonBinarySubType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *function __attribute__((swift_name("function")));
@property (class, readonly) SharedKbsonBsonBinarySubType *oldBinary __attribute__((swift_name("oldBinary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidLegacy __attribute__((swift_name("uuidLegacy")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidStandard __attribute__((swift_name("uuidStandard")));
@property (class, readonly) SharedKbsonBsonBinarySubType *md5 __attribute__((swift_name("md5")));
@property (class, readonly) SharedKbsonBsonBinarySubType *encrypted __attribute__((swift_name("encrypted")));
@property (class, readonly) SharedKbsonBsonBinarySubType *column __attribute__((swift_name("column")));
@property (class, readonly) SharedKbsonBsonBinarySubType *userDefined __attribute__((swift_name("userDefined")));
+ (SharedKotlinArray<SharedKbsonBsonBinarySubType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int8_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary.Companion")))
@interface SharedKbsonBsonBinaryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBinaryCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean.Companion")))
@interface SharedKbsonBsonBooleanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBooleanCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKbsonBsonBoolean *)valueOfValue:(BOOL)value __attribute__((swift_name("valueOf(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *FALSE_VALUE __attribute__((swift_name("FALSE_VALUE")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *TRUE_VALUE __attribute__((swift_name("TRUE_VALUE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer.Companion")))
@interface SharedKbsonBsonDBPointerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDBPointerCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime.Companion")))
@interface SharedKbsonBsonDateTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128.Companion")))
@interface SharedKbsonBsonDecimal128Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDecimal128Companion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonDecimal128 *)fromIEEE754BIDEncodingHigh:(uint64_t)high low:(uint64_t)low __attribute__((swift_name("fromIEEE754BIDEncoding(high:low:)")));
- (SharedKbsonBsonDecimal128 *)invokeValue:(NSString *)value __attribute__((swift_name("invoke(value:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_NaN __attribute__((swift_name("NEGATIVE_NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_ZERO __attribute__((swift_name("NEGATIVE_ZERO")));
@property (readonly) SharedKbsonBsonDecimal128 *NaN __attribute__((swift_name("NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_ZERO __attribute__((swift_name("POSITIVE_ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble.Companion")))
@interface SharedKbsonBsonDoubleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDoubleCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32.Companion")))
@interface SharedKbsonBsonInt32Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt32Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64.Companion")))
@interface SharedKbsonBsonInt64Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt64Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript.Companion")))
@interface SharedKbsonBsonJavaScriptCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope.Companion")))
@interface SharedKbsonBsonJavaScriptWithScopeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptWithScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression.Companion")))
@interface SharedKbsonBsonRegularExpressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonRegularExpressionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString.Companion")))
@interface SharedKbsonBsonStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonStringCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol.Companion")))
@interface SharedKbsonBsonSymbolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonSymbolCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp.Companion")))
@interface SharedKbsonBsonTimestampCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonTimestampCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseLogLevel")))
@interface SharedLibrary_baseLogLevel : SharedKotlinEnum<SharedLibrary_baseLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) SharedLibrary_baseLogLevel *trace __attribute__((swift_name("trace")));
@property (class, readonly) SharedLibrary_baseLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedLibrary_baseLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedLibrary_baseLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) SharedLibrary_baseLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedLibrary_baseLogLevel *wtf __attribute__((swift_name("wtf")));
@property (class, readonly) SharedLibrary_baseLogLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedLibrary_baseLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@end

__attribute__((swift_name("Library_baseRealmLogger")))
@protocol SharedLibrary_baseRealmLogger
@required
- (void)logLevel:(SharedLibrary_baseLogLevel *)level message:(NSString *)message __attribute__((swift_name("log(level:message:)")));
- (void)logLevel:(SharedLibrary_baseLogLevel *)level throwable:(SharedKotlinThrowable * _Nullable)throwable message:(NSString * _Nullable)message args:(SharedKotlinArray<id> *)args __attribute__((swift_name("log(level:throwable:message:args:)")));
@property (readonly) SharedLibrary_baseLogLevel *level __attribute__((swift_name("level")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Library_baseRealmProperty")))
@protocol SharedLibrary_baseRealmProperty
@required
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedLibrary_baseRealmPropertyType> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseRealmClassKind")))
@interface SharedLibrary_baseRealmClassKind : SharedKotlinEnum<SharedLibrary_baseRealmClassKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseRealmClassKind *standard __attribute__((swift_name("standard")));
@property (class, readonly) SharedLibrary_baseRealmClassKind *embedded __attribute__((swift_name("embedded")));
@property (class, readonly) SharedLibrary_baseRealmClassKind *asymmetric __attribute__((swift_name("asymmetric")));
+ (SharedKotlinArray<SharedLibrary_baseRealmClassKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Library_baseRealmPropertyType")))
@protocol SharedLibrary_baseRealmPropertyType
@required
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedLibrary_baseRealmStorageType *storageType __attribute__((swift_name("storageType")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseRealmStorageType")))
@interface SharedLibrary_baseRealmStorageType : SharedKotlinEnum<SharedLibrary_baseRealmStorageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseRealmStorageType *bool_ __attribute__((swift_name("bool_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *int_ __attribute__((swift_name("int_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *string __attribute__((swift_name("string")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *object __attribute__((swift_name("object")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *float_ __attribute__((swift_name("float_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *decimal128 __attribute__((swift_name("decimal128")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *objectId __attribute__((swift_name("objectId")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *uuid __attribute__((swift_name("uuid")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *any __attribute__((swift_name("any")));
+ (SharedKotlinArray<SharedLibrary_baseRealmStorageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) id<SharedKotlinKClass> kClass __attribute__((swift_name("kClass")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
