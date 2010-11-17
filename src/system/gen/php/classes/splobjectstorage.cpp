/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/iterator.h>
#include <php/classes/splobjectstorage.h>
#include <php/classes/iterator.fws.h>
#include <php/classes/splobjectstorage.fws.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/splobjectstorage.php line 12 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SplObjectStorage
Variant c_SplObjectStorage::os_getInit(CStrRef s) {
  DECLARE_SYSTEM_GLOBALS(g);
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_RETURN_NAMSTR(0x4B27521443880CAELL, NAMSTR(s_sys_ss43880cae, "index"),
                         0LL, 5);
      break;
    case 3:
      HASH_RETURN_NAMSTR(0x17AC96477E2B6DC3LL, NAMSTR(s_sys_ss7e2b6dc3, "storage"),
                         s_sys_sa00000000, 7);
      break;
    default:
      break;
  }
  return c_ObjectData::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_SplObjectStorage
Variant c_SplObjectStorage::os_get(CStrRef s) {
  return c_ObjectData::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SplObjectStorage
Variant &c_SplObjectStorage::os_lval(CStrRef s) {
  return c_ObjectData::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_SplObjectStorage
void c_SplObjectStorage::o_getArray(Array &props) const {
  if (isInitialized(m_storage)) props.add(NAMSTR(s_sys_ss3d348351, "\000SplObjectStorage\000storage"), m_storage.isReferenced() ? ref(m_storage) : m_storage, true);
  props.add(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"), m_index, true);
  c_ObjectData::o_getArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_SplObjectStorage
void c_SplObjectStorage::o_setArray(CArrRef props) {
  props->load(NAMSTR(s_sys_ss3d348351, "\000SplObjectStorage\000storage"), m_storage);
  if (props->exists(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"))) m_index = props->get(NAMSTR(s_sys_ss352fe1c6, "\000SplObjectStorage\000index"));
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_SplObjectStorage
Variant * c_SplObjectStorage::o_realProp(CStrRef prop, int flags, CStrRef context) const {
  CStrRef s = context.isNull() ? FrameInjection::GetClassName(false) : context;
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_GUARD_STRING(0x5BA243B9FBA7A64FLL, SplObjectStorage) { return o_realPropPrivate(prop, flags); }
      break;
    default:
      break;
  }
  return o_realPropPublic(prop, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SplObjectStorage
Variant * c_SplObjectStorage::o_realPropPublic(CStrRef s, int flags) const {
  return c_ObjectData::o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SplObjectStorage
Variant * c_SplObjectStorage::o_realPropPrivate(CStrRef s, int flags) const {
  DECLARE_SYSTEM_GLOBALS(g);
  int64 hash = s->hash();
  switch (hash & 3) {
    case 2:
      HASH_REALPROP_TYPED_STRING(0x4B27521443880CAELL, "index", 5, index);
      break;
    case 3:
      HASH_REALPROP_STRING(0x17AC96477E2B6DC3LL, "storage", 7, storage);
      break;
    default:
      break;
  }
  return o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SplObjectStorage
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_SplObjectStorage
Variant c_SplObjectStorage::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_SplObjectStorage
IMPLEMENT_CLASS(SplObjectStorage)
bool c_SplObjectStorage::o_instanceof(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 7) {
    case 1:
      HASH_INSTANCEOF(0x795F86375EE263D1LL, NAMSTR(s_sys_ss5ee263d1, "countable"));
      HASH_INSTANCEOF(0x66679538C5E6F0A1LL, NAMSTR(s_sys_ss3a190f5f, "traversable"));
      break;
    case 6:
      HASH_INSTANCEOF(0x0636A5F84AF9D29ELL, NAMSTR(s_sys_ss4af9d29e, "iterator"));
      break;
    case 7:
      HASH_INSTANCEOF(0x5BA243B9FBA7A64FLL, NAMSTR(s_sys_ss045859b1, "splobjectstorage"));
      break;
    default:
      break;
  }
  return false;
}
ObjectData *c_SplObjectStorage::cloneImpl() {
  c_SplObjectStorage *obj = NEW(c_SplObjectStorage)();
  cloneSet(obj);
  return obj;
}
void c_SplObjectStorage::cloneSet(c_SplObjectStorage *clone) {
  clone->m_storage = m_storage.isReferenced() ? ref(m_storage) : m_storage;
  clone->m_index = m_index;
  ObjectData::cloneSet(clone);
}
Variant c_SplObjectStorage::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  if (hash < 0) hash = hash_string(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
        return (t_attach(a0), null);
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
        return (t_count());
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
        return (t_contains(a0));
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
        return (t_detach(a0), null);
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
        return (t_current());
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_SplObjectStorage::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
CallInfo c_SplObjectStorage::ci_next((void*)&c_SplObjectStorage::i_next, (void*)&c_SplObjectStorage::ifa_next, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_detach((void*)&c_SplObjectStorage::i_detach, (void*)&c_SplObjectStorage::ifa_detach, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_attach((void*)&c_SplObjectStorage::i_attach, (void*)&c_SplObjectStorage::ifa_attach, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_count((void*)&c_SplObjectStorage::i_count, (void*)&c_SplObjectStorage::ifa_count, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_key((void*)&c_SplObjectStorage::i_key, (void*)&c_SplObjectStorage::ifa_key, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_valid((void*)&c_SplObjectStorage::i_valid, (void*)&c_SplObjectStorage::ifa_valid, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_contains((void*)&c_SplObjectStorage::i_contains, (void*)&c_SplObjectStorage::ifa_contains, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_current((void*)&c_SplObjectStorage::i_current, (void*)&c_SplObjectStorage::ifa_current, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_rewind((void*)&c_SplObjectStorage::i_rewind, (void*)&c_SplObjectStorage::ifa_rewind, 0, 4, 0x0000000000000000LL);
Variant c_SplObjectStorage::i_next(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_SplObjectStorage::i_detach(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_detach(arg0), null);
  }
}
Variant c_SplObjectStorage::i_attach(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_attach(arg0), null);
  }
}
Variant c_SplObjectStorage::i_count(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
  return (self->t_count());
}
Variant c_SplObjectStorage::i_key(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
  return (self->t_key());
}
Variant c_SplObjectStorage::i_valid(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
  return (self->t_valid());
}
Variant c_SplObjectStorage::i_contains(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_contains(arg0));
  }
}
Variant c_SplObjectStorage::i_current(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
  return (self->t_current());
}
Variant c_SplObjectStorage::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant c_SplObjectStorage::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_SplObjectStorage::ifa_detach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
  return (self->t_detach(a0), null);
}
Variant c_SplObjectStorage::ifa_attach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
  return (self->t_attach(a0), null);
}
Variant c_SplObjectStorage::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
  return (self->t_count());
}
Variant c_SplObjectStorage::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
  return (self->t_key());
}
Variant c_SplObjectStorage::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
  return (self->t_valid());
}
Variant c_SplObjectStorage::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count != 1) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
  return (self->t_contains(a0));
}
Variant c_SplObjectStorage::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
  return (self->t_current());
}
Variant c_SplObjectStorage::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  c_SplObjectStorage *self = NULL;
  p_SplObjectStorage pobj;
  if (mcp.obj) {
    self = static_cast<c_SplObjectStorage*>(mcp.obj);
  } else {
    self = createDummy(pobj);
  }
  if (count > 0) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
  return (self->t_rewind(), null);
}
bool c_SplObjectStorage::os_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s __attribute__((__unused__)) (mcp.name);
  if (hash < 0) hash = s->hash();
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        mcp.ci = &c_SplObjectStorage::ci_valid;
        return true;
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        mcp.ci = &c_SplObjectStorage::ci_rewind;
        return true;
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        mcp.ci = &c_SplObjectStorage::ci_attach;
        return true;
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        mcp.ci = &c_SplObjectStorage::ci_count;
        return true;
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        mcp.ci = &c_SplObjectStorage::ci_contains;
        return true;
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        mcp.ci = &c_SplObjectStorage::ci_key;
        return true;
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        mcp.ci = &c_SplObjectStorage::ci_detach;
        return true;
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        mcp.ci = &c_SplObjectStorage::ci_next;
        return true;
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        mcp.ci = &c_SplObjectStorage::ci_current;
        return true;
      }
      break;
    default:
      break;
  }
  return c_ObjectData::os_get_call_info(mcp, hash);
}
bool c_SplObjectStorage::o_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s __attribute__((__unused__)) (mcp.name);
  if (hash < 0) hash = s->hash();
  switch (hash & 31) {
    case 4:
      HASH_GUARD_LITSTR(0x6413CB5154808C44LL, NAMSTR(s_sys_ss54808c44, "valid")) {
        mcp.ci = &c_SplObjectStorage::ci_valid;
        mcp.obj = this;
        return true;
      }
      break;
    case 10:
      HASH_GUARD_LITSTR(0x1670096FDE27AF6ALL, NAMSTR(s_sys_ss21d85096, "rewind")) {
        mcp.ci = &c_SplObjectStorage::ci_rewind;
        mcp.obj = this;
        return true;
      }
      break;
    case 12:
      HASH_GUARD_LITSTR(0x62DD82BFEB88A4ACLL, NAMSTR(s_sys_ss14775b54, "attach")) {
        mcp.ci = &c_SplObjectStorage::ci_attach;
        mcp.obj = this;
        return true;
      }
      break;
    case 16:
      HASH_GUARD_LITSTR(0x5CEFA5A265104D10LL, NAMSTR(s_sys_ss65104d10, "count")) {
        mcp.ci = &c_SplObjectStorage::ci_count;
        mcp.obj = this;
        return true;
      }
      HASH_GUARD_LITSTR(0x61B94551FA22D290LL, NAMSTR(s_sys_ss05dd2d70, "contains")) {
        mcp.ci = &c_SplObjectStorage::ci_contains;
        mcp.obj = this;
        return true;
      }
      break;
    case 17:
      HASH_GUARD_LITSTR(0x56EDB60C824E8C51LL, NAMSTR(s_sys_ss7db173af, "key")) {
        mcp.ci = &c_SplObjectStorage::ci_key;
        mcp.obj = this;
        return true;
      }
      break;
    case 21:
      HASH_GUARD_LITSTR(0x3C7D0AC0EBA9A695LL, NAMSTR(s_sys_ss1456596b, "detach")) {
        mcp.ci = &c_SplObjectStorage::ci_detach;
        mcp.obj = this;
        return true;
      }
      break;
    case 24:
      HASH_GUARD_LITSTR(0x3C6D50F3BB8102B8LL, NAMSTR(s_sys_ss447efd48, "next")) {
        mcp.ci = &c_SplObjectStorage::ci_next;
        mcp.obj = this;
        return true;
      }
      break;
    case 28:
      HASH_GUARD_LITSTR(0x5B3A4A72846B21DCLL, NAMSTR(s_sys_ss7b94de24, "current")) {
        mcp.ci = &c_SplObjectStorage::ci_current;
        mcp.obj = this;
        return true;
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_get_call_info(mcp, hash);
}
struct ObjectStaticCallbacks cw_SplObjectStorage = {
  c_SplObjectStorage::os_getInit,
  c_SplObjectStorage::os_get,
  c_SplObjectStorage::os_lval,
  c_SplObjectStorage::os_invoke,
  c_SplObjectStorage::os_constant,
  c_SplObjectStorage::os_get_call_info
};
void c_SplObjectStorage::init() {
  m_storage = s_sys_sa00000000;
  m_index = 0LL;
}
/* SRC: classes/splobjectstorage.php line 24 */
void c_SplObjectStorage::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::rewind);
  x_rewind(toObject(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 37 */
bool c_SplObjectStorage::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::valid);
  {
    const Variant &tmp1((x_key(ref(m_storage))));
    return !same(tmp1, false);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 50 */
int64 c_SplObjectStorage::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::key);
  return m_index;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 62 */
Variant c_SplObjectStorage::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::current);
  return x_current(ref(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 74 */
void c_SplObjectStorage::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::next);
  x_next(ref(m_storage));
  m_index++;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 87 */
int c_SplObjectStorage::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::count);
  return x_count(m_storage);
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 102 */
bool c_SplObjectStorage::t_contains(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::contains);
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin(s_class_name, true); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          {
            if (same(v_object, v_obj)) {
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 124 */
void c_SplObjectStorage::t_attach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::attach);
  {
    bool tmp1;
    {
      bool tmp2 = (x_is_object(v_obj));
      if (tmp2) {
        bool tmp3((t_contains(v_obj)));
        tmp2 = (!(tmp3));
      }
      tmp1 = (tmp2);
    }
    if (tmp1) {
      {
        {
          Variant tmp4((v_obj));
          m_storage.append((tmp4));
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 140 */
void c_SplObjectStorage::t_detach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::detach);
  Primitive v_idx = 0;
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin(s_class_name, true); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          v_idx = iter3->first();
          {
            if (same(v_object, v_obj)) {
              {
                m_storage.weakRemove(v_idx);
                {
                  MethodCallPackage mcp1;
                  mcp1.methodCall((GET_THIS()), NAMSTR(s_sys_ss21d85096, "rewind"), 0x1670096FDE27AF6ALL);
                  const CallInfo *cit1  __attribute__((__unused__)) = mcp1.ci;
                  (mcp1.bindClass(info)->getMethFewArgs())(mcp1, 0, null_variant, null_variant, null_variant, null_variant, null_variant, null_variant);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
Object co_SplObjectStorage(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_SplObjectStorage)())->dynCreate(params, init));
}
Object coo_SplObjectStorage() {
  Object r(NEW(c_SplObjectStorage)());
  r->init();
  return r;
}
Variant pm_php$classes$splobjectstorage_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::classes/splobjectstorage.php, pm_php$classes$splobjectstorage_php);
  LVariableTable *gVariables __attribute__((__unused__)) = (LVariableTable *)g;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
