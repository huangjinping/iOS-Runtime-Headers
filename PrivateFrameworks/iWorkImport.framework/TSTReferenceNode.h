/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTReferenceNode : TSTExpressionNode {
    bool  mBlankForKeyboardInsertion;
    NSString * mFormulaPlainText;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  mHostTableUID;
    unsigned char  mRangeContext;
    bool  mRangeWithFunction;
    NSString * mRefString;
    TSTReferenceColorHelper * mReferenceColorHelper;
    bool  mSuppressAutomaticNamedReferenceInvalidation;
    TSTUidRangeRef * mUidRangeRef;
}

@property (getter=isBlankForKeyboardInsertion, nonatomic) bool blankForKeyboardInsertion;
@property (nonatomic, readonly) TSCECalculationEngine *calculationEngine;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } hostTableUID;
@property (getter=isLocalReference, nonatomic, readonly) bool localReference;
@property (getter=isNonSpanningRange, nonatomic, readonly) bool nonSpanningRange;
@property (getter=isRange, nonatomic, readonly) bool range;
@property (nonatomic) unsigned char rangeContext;
@property (nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; } rangeCoordinate;
@property (nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; } rangeReference;
@property (getter=isRangeWithFunction, nonatomic) bool rangeWithFunction;
@property (nonatomic, retain) TSTReferenceColorHelper *referenceColorHelper;
@property (getter=isResizable, nonatomic, readonly) bool resizable;
@property (getter=isSimpleRowOrColumnReference, nonatomic, readonly) bool simpleRowOrColumnReference;
@property (getter=isSingleASTNode, nonatomic, readonly) bool singleASTNode;
@property (nonatomic) unsigned char stickyBits;
@property (nonatomic, readonly) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } tableUID;
@property (nonatomic, readonly) TSTUidRangeRef *uidRangeRef;

+ (unsigned char)stickyBitsForReference:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1 calcEngine:(id)arg2;

- (id).cxx_construct;
- (void)buildASTNodeArray:(/* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*QQ@}' */ struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)arg1 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; }*)arg3;
- (id)calculationEngine;
- (id)changeNotifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)documentRoot;
- (id)exportString;
- (id)formulaPlainText;
- (unsigned long long)hash;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })hostTableUID;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 stickyBits:(unsigned char)arg4 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg5 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned long long)arg8 lastIndex:(unsigned long long)arg9;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 stickyBits:(unsigned char)arg4 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg5 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned long long)arg8 lastIndex:(unsigned long long)arg9 suppressAutomaticNamedReferenceInvalidation:(bool)arg10;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 uidRangeRef:(id)arg3 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg4 referenceColorHelper:(id)arg5 firstIndex:(unsigned long long)arg6 lastIndex:(unsigned long long)arg7 suppressAutomaticNamedReferenceInvalidation:(bool)arg8;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 suppressAutomaticNamedReferenceInvalidation:(bool)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2;
- (void)invalidate;
- (bool)isBlankForKeyboardInsertion;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExpressionNode:(id)arg1;
- (bool)isLocalReference;
- (bool)isNonSpanningRange;
- (bool)isRange;
- (bool)isRangeWithFunction;
- (bool)isResizable;
- (bool)isSimpleRowOrColumnReference;
- (bool)isSingleASTNode;
- (bool)isValidReference;
- (void)loadFromArchive:(const struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct RangeReferenceArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct UUID {} *x8; struct CellUIDArchive {} *x9; struct CellUIDArchive {} *x10; unsigned int x11; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_buildASTNodeArray:(/* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*QQ@}' */ struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)arg1 forTopLeft:(bool)arg2 stickyBits:(unsigned char)arg3 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (void)p_resetMenu;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (unsigned char)rangeContext;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeCoordinate;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })rangeReference;
- (struct TSTCSENodeData { unsigned long long x1; unsigned long long x2; })recordHashesForSubexpressions:(id)arg1;
- (id)referenceColorHelper;
- (void)saveToArchive:(struct ReferenceNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct RangeReferenceArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct UUID {} *x8; struct CellUIDArchive {} *x9; struct CellUIDArchive {} *x10; unsigned int x11; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlankForKeyboardInsertion:(bool)arg1;
- (void)setHostTableUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setRangeContext:(unsigned char)arg1;
- (void)setRangeCoordinate:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (void)setRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1;
- (void)setRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 stickyBits:(unsigned char)arg2;
- (void)setRangeWithFunction:(bool)arg1;
- (void)setReferenceColorHelper:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (unsigned char)stickyBits;
- (id)string;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })tableUID;
- (int)tokenType;
- (id)uidRangeRef;

@end
