

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Parser::parseFile_2_closure : public SDAG::Closure {
            char* inputFile;


      parseFile_2_closure() {
        init();
      }
      parseFile_2_closure(CkMigrateMessage*) {
        init();
      }
            char* & getP0() { return inputFile;}
      void pup(PUP::er& __p) {
        __p | inputFile;
        packClosure(__p);
      }
      virtual ~parseFile_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(parseFile_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Parser::firstPass_3_closure : public SDAG::Closure {
            char* inputFile;


      firstPass_3_closure() {
        init();
      }
      firstPass_3_closure(CkMigrateMessage*) {
        init();
      }
            char* & getP0() { return inputFile;}
      void pup(PUP::er& __p) {
        __p | inputFile;
        packClosure(__p);
      }
      virtual ~firstPass_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(firstPass_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Parser::secondPass_4_closure : public SDAG::Closure {
            std::vector<CProxy_StringNode > firstPassTab;


      secondPass_4_closure() {
        init();
      }
      secondPass_4_closure(CkMigrateMessage*) {
        init();
      }
            std::vector<CProxy_StringNode > & getP0() { return firstPassTab;}
      void pup(PUP::er& __p) {
        __p | firstPassTab;
        packClosure(__p);
      }
      virtual ~secondPass_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(secondPass_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Parser::secondPassVecInit_5_closure : public SDAG::Closure {
            std::vector<CProxy_StringNode > firstPassVec;


      secondPassVecInit_5_closure() {
        init();
      }
      secondPassVecInit_5_closure(CkMigrateMessage*) {
        init();
      }
            std::vector<CProxy_StringNode > & getP0() { return firstPassVec;}
      void pup(PUP::er& __p) {
        __p | firstPassVec;
        packClosure(__p);
      }
      virtual ~secondPassVecInit_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(secondPassVecInit_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Parser::createNodeDep_6_closure : public SDAG::Closure {
            std::vector<std::string > stringDepVec;
            std::vector<CProxy_Node > secondPassVec;


      createNodeDep_6_closure() {
        init();
      }
      createNodeDep_6_closure(CkMigrateMessage*) {
        init();
      }
            std::vector<std::string > & getP0() { return stringDepVec;}
            std::vector<CProxy_Node > & getP1() { return secondPassVec;}
      void pup(PUP::er& __p) {
        __p | stringDepVec;
        __p | secondPassVec;
        packClosure(__p);
      }
      virtual ~createNodeDep_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(createNodeDep_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: chare Parser: Chare{
Parser();
sync std::string parseFile(char* inputFile);
sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
sync std::vector<CProxy_Node > secondPass(const std::vector<CProxy_StringNode > &firstPassTab);
sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec);
sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Parser::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Parser();
 */

CkChareID CProxy_Parser::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Parser::__idx, CkIndex_Parser::idx_Parser_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Parser::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_Parser::__idx, CkIndex_Parser::idx_Parser_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function

int CkIndex_Parser::reg_Parser_void() {
  int epidx = CkRegisterEp("Parser()",
      _call_Parser_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Parser::_call_Parser_void(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj_void) Parser();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::string parseFile(char* inputFile);
 */

std::string CProxy_Parser::parseFile(char* inputFile, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: char* inputFile
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|inputFile;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|inputFile;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Parser::idx_parseFile_marshall2(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::string retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Parser::reg_parseFile_marshall2() {
  int epidx = CkRegisterEp("parseFile(char* inputFile)",
      _call_parseFile_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_parseFile_marshall2);

  return epidx;
}


void CkIndex_Parser::_call_parseFile_marshall2(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: char* inputFile*/
  PUP::fromMem implP(impl_buf);
  char inputFile; implP|inputFile;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  std::string impl_ret_val=   impl_obj->parseFile(inputFile);
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_Parser::_marshallmessagepup_parseFile_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: char* inputFile*/
  PUP::fromMem implP(impl_buf);
  char inputFile; implP|inputFile;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("inputFile");
  implDestP|inputFile;
}
PUPable_def(SINGLE_ARG(Closure_Parser::parseFile_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
 */

std::vector<CProxy_StringNode > CProxy_Parser::firstPass(char* inputFile, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: char* inputFile
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|inputFile;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|inputFile;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Parser::idx_firstPass_marshall3(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<CProxy_StringNode > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Parser::reg_firstPass_marshall3() {
  int epidx = CkRegisterEp("firstPass(char* inputFile)",
      _call_firstPass_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_firstPass_marshall3);

  return epidx;
}


void CkIndex_Parser::_call_firstPass_marshall3(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: char* inputFile*/
  PUP::fromMem implP(impl_buf);
  char inputFile; implP|inputFile;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  std::vector<CProxy_StringNode > impl_ret_val=   impl_obj->firstPass(inputFile);
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_Parser::_marshallmessagepup_firstPass_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: char* inputFile*/
  PUP::fromMem implP(impl_buf);
  char inputFile; implP|inputFile;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("inputFile");
  implDestP|inputFile;
}
PUPable_def(SINGLE_ARG(Closure_Parser::firstPass_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<CProxy_Node > secondPass(const std::vector<CProxy_StringNode > &firstPassTab);
 */

std::vector<CProxy_Node > CProxy_Parser::secondPass(const std::vector<CProxy_StringNode > &firstPassTab, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<CProxy_StringNode > &firstPassTab
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_StringNode > &)firstPassTab;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_StringNode > &)firstPassTab;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Parser::idx_secondPass_marshall4(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<CProxy_Node > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Parser::reg_secondPass_marshall4() {
  int epidx = CkRegisterEp("secondPass(const std::vector<CProxy_StringNode > &firstPassTab)",
      _call_secondPass_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_secondPass_marshall4);

  return epidx;
}


void CkIndex_Parser::_call_secondPass_marshall4(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_StringNode > &firstPassTab*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_StringNode > firstPassTab; implP|firstPassTab;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  std::vector<CProxy_Node > impl_ret_val=   impl_obj->secondPass(firstPassTab);
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_Parser::_marshallmessagepup_secondPass_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_StringNode > &firstPassTab*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_StringNode > firstPassTab; implP|firstPassTab;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("firstPassTab");
  implDestP|firstPassTab;
}
PUPable_def(SINGLE_ARG(Closure_Parser::secondPass_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec);
 */

std::vector<CProxy_Node > CProxy_Parser::secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<CProxy_StringNode > &firstPassVec
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_StringNode > &)firstPassVec;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_StringNode > &)firstPassVec;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Parser::idx_secondPassVecInit_marshall5(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<CProxy_Node > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Parser::reg_secondPassVecInit_marshall5() {
  int epidx = CkRegisterEp("secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec)",
      _call_secondPassVecInit_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_secondPassVecInit_marshall5);

  return epidx;
}


void CkIndex_Parser::_call_secondPassVecInit_marshall5(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_StringNode > &firstPassVec*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_StringNode > firstPassVec; implP|firstPassVec;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  std::vector<CProxy_Node > impl_ret_val=   impl_obj->secondPassVecInit(firstPassVec);
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_Parser::_marshallmessagepup_secondPassVecInit_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<CProxy_StringNode > &firstPassVec*/
  PUP::fromMem implP(impl_buf);
  std::vector<CProxy_StringNode > firstPassVec; implP|firstPassVec;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("firstPassVec");
  implDestP|firstPassVec;
}
PUPable_def(SINGLE_ARG(Closure_Parser::secondPassVecInit_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
 */

std::vector<CProxy_Node > CProxy_Parser::createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)stringDepVec;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)secondPassVec;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<std::string > &)stringDepVec;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<CProxy_Node > &)secondPassVec;
  }
  CkMarshallMsg *impl_msg_typed_ret = (CkMarshallMsg *)CkRemoteCall(CkIndex_Parser::idx_createNodeDep_marshall6(), impl_msg, &ckGetChareID());
  char *impl_buf_ret=impl_msg_typed_ret->msgBuf; 
  PUP::fromMem implPS(impl_buf_ret); 
  std::vector<CProxy_Node > retval; implPS|retval; 
  CkFreeMsg(impl_msg_typed_ret); 
  return retval; 
}

// Entry point registration function

int CkIndex_Parser::reg_createNodeDep_marshall6() {
  int epidx = CkRegisterEp("createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec)",
      _call_createNodeDep_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_createNodeDep_marshall6);

  return epidx;
}


void CkIndex_Parser::_call_createNodeDep_marshall6(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec*/
  PUP::fromMem implP(impl_buf);
  std::vector<std::string > stringDepVec; implP|stringDepVec;
  std::vector<CProxy_Node > secondPassVec; implP|secondPassVec;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  std::vector<CProxy_Node > impl_ret_val=   impl_obj->createNodeDep(stringDepVec, secondPassVec);
  //Marshall: impl_ret_val
  int impl_ret_size=0;
  { //Find the size of the PUP'd data
    PUP::sizer implPS;
    implPS|impl_ret_val;
    impl_ret_size+=implPS.size();
  };
  CkMarshallMsg *impl_retMsg=CkAllocateMarshallMsg(impl_ret_size, NULL);
  { //Copy over the PUP'd data;
    PUP::toMem implPS((void *)impl_retMsg->msgBuf);
    implPS|impl_ret_val;
  };
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}

void CkIndex_Parser::_marshallmessagepup_createNodeDep_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec*/
  PUP::fromMem implP(impl_buf);
  std::vector<std::string > stringDepVec; implP|stringDepVec;
  std::vector<CProxy_Node > secondPassVec; implP|secondPassVec;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("stringDepVec");
  implDestP|stringDepVec;
  if (implDestP.hasComments()) implDestP.comment("secondPassVec");
  implDestP|secondPassVec;
}
PUPable_def(SINGLE_ARG(Closure_Parser::createNodeDep_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Parser::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Parser();
  idx_Parser_void();
  CkRegisterDefaultCtor(__idx, idx_Parser_void());

  // REG: sync std::string parseFile(char* inputFile);
  idx_parseFile_marshall2();

  // REG: sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
  idx_firstPass_marshall3();

  // REG: sync std::vector<CProxy_Node > secondPass(const std::vector<CProxy_StringNode > &firstPassTab);
  idx_secondPass_marshall4();

  // REG: sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec);
  idx_secondPassVecInit_marshall5();

  // REG: sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
  idx_createNodeDep_marshall6();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParser(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerStringNode();

  _registerNode();

/* REG: chare Parser: Chare{
Parser();
sync std::string parseFile(char* inputFile);
sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
sync std::vector<CProxy_Node > secondPass(const std::vector<CProxy_StringNode > &firstPassTab);
sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<CProxy_StringNode > &firstPassVec);
sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
};
*/
  CkIndex_Parser::__register("Parser", sizeof(Parser));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Parser::virtual_pup(PUP::er &p) {
    recursive_pup<Parser >(dynamic_cast<Parser* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
