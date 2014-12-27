#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void Unifill_obj::__construct()
{
	return null();
}

//Unifill_obj::~Unifill_obj() { }

Dynamic Unifill_obj::__CreateEmpty() { return  new Unifill_obj; }
hx::ObjectPtr< Unifill_obj > Unifill_obj::__new()
{  hx::ObjectPtr< Unifill_obj > result = new Unifill_obj();
	result->__construct();
	return result;}

Dynamic Unifill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unifill_obj > result = new Unifill_obj();
	result->__construct();
	return result;}

int Unifill_obj::uLength( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uLength",0x79ec6e30,"luxe.utils.unifill.Unifill.uLength","luxe/utils/unifill/Unifill.hx",14,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(14)
	::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(14)
	return u->codePointCount((int)0,s.length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uLength,return )

::String Unifill_obj::uCharAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCharAt",0x925a52b3,"luxe.utils.unifill.Unifill.uCharAt","luxe/utils/unifill/Unifill.hx",21,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(21)
	int codePoint = ::haxe::Utf8_obj::charCodeAt(s,index);		HX_STACK_VAR(codePoint,"codePoint");
	HX_STACK_LINE(21)
	::luxe::utils::unifill::Utf8 _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(21)
		::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),codePoint);
		struct _Function_2_1{
			inline static ::String Block( ::haxe::io::BytesBuffer &buf){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",21,0x52105abe)
				{
					HX_STACK_LINE(21)
					::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
					struct _Function_3_1{
						inline static ::String Block( ::haxe::io::Bytes &b){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",21,0x52105abe)
							{
								HX_STACK_LINE(21)
								::String s1 = b->toString();		HX_STACK_VAR(s1,"s1");
								HX_STACK_LINE(21)
								return s1;
							}
							return null();
						}
					};
					HX_STACK_LINE(21)
					return _Function_3_1::Block(b);
				}
				return null();
			}
		};
		HX_STACK_LINE(21)
		_this = ::luxe::utils::unifill::Utf8_obj::__new(_Function_2_1::Block(buf));
	}
	HX_STACK_LINE(21)
	return _this->str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCharAt,return )

int Unifill_obj::uCharCodeAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCharCodeAt",0xe1c12d40,"luxe.utils.unifill.Unifill.uCharCodeAt","luxe/utils/unifill/Unifill.hx",33,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(33)
	return ::haxe::Utf8_obj::charCodeAt(s,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCharCodeAt,return )

int Unifill_obj::uCodePointAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCodePointAt",0x7e45822c,"luxe.utils.unifill.Unifill.uCodePointAt","luxe/utils/unifill/Unifill.hx",44,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(44)
	return ::haxe::Utf8_obj::charCodeAt(s,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCodePointAt,return )

int Unifill_obj::uIndexOf( ::String s,::String value,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uIndexOf",0x8e18903f,"luxe.utils.unifill.Unifill.uIndexOf","luxe/utils/unifill/Unifill.hx",52,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(startIndex,"startIndex")
{
		struct _Function_1_1{
			inline static int Block( ::String &s,int &startIndex){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",53,0x52105abe)
				{
					HX_STACK_LINE(53)
					::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
					struct _Function_2_1{
						inline static int Block( ::luxe::utils::unifill::Utf8 &u,int &startIndex){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",53,0x52105abe)
							{
								HX_STACK_LINE(53)
								int index = (int)0;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(53)
								int len = u->str.length;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(53)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(53)
								while(((bool((i < startIndex)) && bool((index < len))))){
									HX_STACK_LINE(53)
									{
										HX_STACK_LINE(53)
										int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(53)
										if (((c < (int)192))){
											HX_STACK_LINE(53)
											hx::AddEq(index,(int)1);
										}
										else{
											HX_STACK_LINE(53)
											if (((c < (int)224))){
												HX_STACK_LINE(53)
												hx::AddEq(index,(int)2);
											}
											else{
												HX_STACK_LINE(53)
												if (((c < (int)240))){
													HX_STACK_LINE(53)
													hx::AddEq(index,(int)3);
												}
												else{
													HX_STACK_LINE(53)
													if (((c < (int)248))){
														HX_STACK_LINE(53)
														hx::AddEq(index,(int)4);
													}
													else{
														HX_STACK_LINE(53)
														hx::AddEq(index,(int)1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(53)
									++(i);
								}
								HX_STACK_LINE(53)
								return index;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( int &startIndex,::luxe::utils::unifill::Utf8 &u){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",53,0x52105abe)
							{
								HX_STACK_LINE(53)
								int index = (int)0;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(53)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(53)
								while(((bool((count < -(startIndex))) && bool(((int)0 < index))))){
									HX_STACK_LINE(53)
									{
										HX_STACK_LINE(53)
										Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
										HX_STACK_LINE(53)
										int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(53)
										if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
											HX_STACK_LINE(53)
											hx::SubEq(index,(int)1);
										}
										else{
											HX_STACK_LINE(53)
											if (((((int(accessor((index - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
												HX_STACK_LINE(53)
												hx::SubEq(index,(int)2);
											}
											else{
												HX_STACK_LINE(53)
												if (((((int(accessor((index - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
													HX_STACK_LINE(53)
													hx::SubEq(index,(int)3);
												}
												else{
													HX_STACK_LINE(53)
													if (((((int(accessor((index - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
														HX_STACK_LINE(53)
														hx::SubEq(index,(int)4);
													}
													else{
														HX_STACK_LINE(53)
														hx::SubEq(index,(int)1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(53)
									++(count);
								}
								HX_STACK_LINE(53)
								return index;
							}
							return null();
						}
					};
					HX_STACK_LINE(53)
					return (  (((startIndex >= (int)0))) ? int(_Function_2_1::Block(u,startIndex)) : int(_Function_2_2::Block(startIndex,u)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		int index = s.indexOf(value,_Function_1_1::Block(s,startIndex));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(54)
		if (((index >= (int)0))){
			HX_STACK_LINE(54)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(54)
			return u->codePointCount((int)0,index);
		}
		else{
			HX_STACK_LINE(54)
			return (int)-1;
		}
		HX_STACK_LINE(54)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uIndexOf,return )

int Unifill_obj::uLastIndexOf( ::String s,::String value,Dynamic startIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uLastIndexOf",0xc7bc3789,"luxe.utils.unifill.Unifill.uLastIndexOf","luxe/utils/unifill/Unifill.hx",62,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_LINE(63)
	if (((startIndex == null()))){
		HX_STACK_LINE(64)
		startIndex = (s.length - (int)1);
	}
	struct _Function_1_1{
		inline static int Block( ::String &s,Dynamic &startIndex){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",65,0x52105abe)
			{
				HX_STACK_LINE(65)
				int codePointOffset = startIndex;		HX_STACK_VAR(codePointOffset,"codePointOffset");
				HX_STACK_LINE(65)
				::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
				struct _Function_2_1{
					inline static int Block( int &codePointOffset,::luxe::utils::unifill::Utf8 &u){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",65,0x52105abe)
						{
							HX_STACK_LINE(65)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(65)
							int len = u->str.length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(65)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(65)
							while(((bool((i < codePointOffset)) && bool((index < len))))){
								HX_STACK_LINE(65)
								{
									HX_STACK_LINE(65)
									int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(65)
									if (((c < (int)192))){
										HX_STACK_LINE(65)
										hx::AddEq(index,(int)1);
									}
									else{
										HX_STACK_LINE(65)
										if (((c < (int)224))){
											HX_STACK_LINE(65)
											hx::AddEq(index,(int)2);
										}
										else{
											HX_STACK_LINE(65)
											if (((c < (int)240))){
												HX_STACK_LINE(65)
												hx::AddEq(index,(int)3);
											}
											else{
												HX_STACK_LINE(65)
												if (((c < (int)248))){
													HX_STACK_LINE(65)
													hx::AddEq(index,(int)4);
												}
												else{
													HX_STACK_LINE(65)
													hx::AddEq(index,(int)1);
												}
											}
										}
									}
								}
								HX_STACK_LINE(65)
								++(i);
							}
							HX_STACK_LINE(65)
							return index;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( int &codePointOffset,::luxe::utils::unifill::Utf8 &u){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",65,0x52105abe)
						{
							HX_STACK_LINE(65)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(65)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(65)
							while(((bool((count < -(codePointOffset))) && bool(((int)0 < index))))){
								HX_STACK_LINE(65)
								{
									HX_STACK_LINE(65)
									Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
									HX_STACK_LINE(65)
									int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(65)
									if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
										HX_STACK_LINE(65)
										hx::SubEq(index,(int)1);
									}
									else{
										HX_STACK_LINE(65)
										if (((((int(accessor((index - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
											HX_STACK_LINE(65)
											hx::SubEq(index,(int)2);
										}
										else{
											HX_STACK_LINE(65)
											if (((((int(accessor((index - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
												HX_STACK_LINE(65)
												hx::SubEq(index,(int)3);
											}
											else{
												HX_STACK_LINE(65)
												if (((((int(accessor((index - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
													HX_STACK_LINE(65)
													hx::SubEq(index,(int)4);
												}
												else{
													HX_STACK_LINE(65)
													hx::SubEq(index,(int)1);
												}
											}
										}
									}
								}
								HX_STACK_LINE(65)
								++(count);
							}
							HX_STACK_LINE(65)
							return index;
						}
						return null();
					}
				};
				HX_STACK_LINE(65)
				return (  (((codePointOffset >= (int)0))) ? int(_Function_2_1::Block(codePointOffset,u)) : int(_Function_2_2::Block(codePointOffset,u)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	int index = s.lastIndexOf(value,_Function_1_1::Block(s,startIndex));		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(66)
	if (((index >= (int)0))){
		HX_STACK_LINE(66)
		::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(66)
		return u->codePointCount((int)0,index);
	}
	else{
		HX_STACK_LINE(66)
		return (int)-1;
	}
	HX_STACK_LINE(66)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uLastIndexOf,return )

Array< ::String > Unifill_obj::uSplit( ::String s,::String delimiter){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSplit",0x5a3c48d0,"luxe.utils.unifill.Unifill.uSplit","luxe/utils/unifill/Unifill.hx",73,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(delimiter,"delimiter")
	HX_STACK_LINE(73)
	if (((delimiter.length == (int)0))){
		HX_STACK_LINE(74)
		Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::String _g1_string = s;		HX_STACK_VAR(_g1_string,"_g1_string");
			HX_STACK_LINE(74)
			int _g1_index = (int)0;		HX_STACK_VAR(_g1_index,"_g1_index");
			HX_STACK_LINE(74)
			int _g1_endIndex = s.length;		HX_STACK_VAR(_g1_endIndex,"_g1_endIndex");
			HX_STACK_LINE(74)
			while(((_g1_index < _g1_endIndex))){
				HX_STACK_LINE(74)
				int i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					int i1 = _g1_index;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::String u_str = _g1_string;		HX_STACK_VAR(u_str,"u_str");
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							int c = u_str.cca(_g1_index);		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(74)
							if (((c < (int)192))){
								HX_STACK_LINE(74)
								hx::AddEq(_g1_index,(int)1);
							}
							else{
								HX_STACK_LINE(74)
								if (((c < (int)224))){
									HX_STACK_LINE(74)
									hx::AddEq(_g1_index,(int)2);
								}
								else{
									HX_STACK_LINE(74)
									if (((c < (int)240))){
										HX_STACK_LINE(74)
										hx::AddEq(_g1_index,(int)3);
									}
									else{
										HX_STACK_LINE(74)
										if (((c < (int)248))){
											HX_STACK_LINE(74)
											hx::AddEq(_g1_index,(int)4);
										}
										else{
											HX_STACK_LINE(74)
											hx::AddEq(_g1_index,(int)1);
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(74)
					i = i1;
				}
				struct _Function_4_1{
					inline static ::String Block( int &i,::String &s){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",74,0x52105abe)
						{
							HX_STACK_LINE(74)
							::String u_str = s;		HX_STACK_VAR(u_str,"u_str");
							struct _Function_5_1{
								inline static ::String Block( int &i,::String &u_str){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",74,0x52105abe)
									{
										struct _Function_6_1{
											inline static ::String Block( int &i,::String &u_str){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",74,0x52105abe)
												{
													HX_STACK_LINE(74)
													Dynamic len;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(74)
													{
														HX_STACK_LINE(74)
														int c = u_str.cca(i);		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(74)
														if (((c < (int)192))){
															HX_STACK_LINE(74)
															len = (int)1;
														}
														else{
															HX_STACK_LINE(74)
															if (((c < (int)224))){
																HX_STACK_LINE(74)
																len = (int)2;
															}
															else{
																HX_STACK_LINE(74)
																if (((c < (int)240))){
																	HX_STACK_LINE(74)
																	len = (int)3;
																}
																else{
																	HX_STACK_LINE(74)
																	if (((c < (int)248))){
																		HX_STACK_LINE(74)
																		len = (int)4;
																	}
																	else{
																		HX_STACK_LINE(74)
																		len = (int)1;
																	}
																}
															}
														}
													}
													struct _Function_7_1{
														inline static ::String Block( int &i,Dynamic &len,::String &u_str){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",74,0x52105abe)
															{
																HX_STACK_LINE(74)
																::String s1 = u_str.substr(i,len);		HX_STACK_VAR(s1,"s1");
																HX_STACK_LINE(74)
																return s1;
															}
															return null();
														}
													};
													HX_STACK_LINE(74)
													return _Function_7_1::Block(i,len,u_str);
												}
												return null();
											}
										};
										HX_STACK_LINE(74)
										::luxe::utils::unifill::Utf8 _this = ::luxe::utils::unifill::Utf8_obj::__new(_Function_6_1::Block(i,u_str));		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(74)
										return _this->str;
									}
									return null();
								}
							};
							HX_STACK_LINE(74)
							return _Function_5_1::Block(i,u_str);
						}
						return null();
					}
				};
				HX_STACK_LINE(74)
				_g->push(_Function_4_1::Block(i,s));
			}
		}
		HX_STACK_LINE(74)
		return _g;
	}
	else{
		HX_STACK_LINE(76)
		return s.split(delimiter);
	}
	HX_STACK_LINE(73)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uSplit,return )

::String Unifill_obj::uSubstr( ::String s,int startIndex,Dynamic length){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSubstr",0x74efc87b,"luxe.utils.unifill.Unifill.uSubstr","luxe/utils/unifill/Unifill.hx",85,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(86)
	int si;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(87)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(87)
		if (((startIndex >= (int)0))){
			HX_STACK_LINE(87)
			index = (int)0;
		}
		else{
			HX_STACK_LINE(87)
			index = s.length;
		}
		HX_STACK_LINE(86)
		::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(86)
		if (((startIndex >= (int)0))){
			HX_STACK_LINE(86)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(86)
			int len = u->str.length;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(86)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(86)
			while(((bool((i < startIndex)) && bool((index1 < len))))){
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					int c = u->str.cca(index1);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(86)
					if (((c < (int)192))){
						HX_STACK_LINE(86)
						hx::AddEq(index1,(int)1);
					}
					else{
						HX_STACK_LINE(86)
						if (((c < (int)224))){
							HX_STACK_LINE(86)
							hx::AddEq(index1,(int)2);
						}
						else{
							HX_STACK_LINE(86)
							if (((c < (int)240))){
								HX_STACK_LINE(86)
								hx::AddEq(index1,(int)3);
							}
							else{
								HX_STACK_LINE(86)
								if (((c < (int)248))){
									HX_STACK_LINE(86)
									hx::AddEq(index1,(int)4);
								}
								else{
									HX_STACK_LINE(86)
									hx::AddEq(index1,(int)1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(86)
				++(i);
			}
			HX_STACK_LINE(86)
			si = index1;
		}
		else{
			HX_STACK_LINE(86)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(86)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(86)
			while(((bool((count < -(startIndex))) && bool(((int)0 < index1))))){
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
					HX_STACK_LINE(86)
					int c1 = accessor((index1 - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(86)
					if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
						HX_STACK_LINE(86)
						hx::SubEq(index1,(int)1);
					}
					else{
						HX_STACK_LINE(86)
						if (((((int(accessor((index1 - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
							HX_STACK_LINE(86)
							hx::SubEq(index1,(int)2);
						}
						else{
							HX_STACK_LINE(86)
							if (((((int(accessor((index1 - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
								HX_STACK_LINE(86)
								hx::SubEq(index1,(int)3);
							}
							else{
								HX_STACK_LINE(86)
								if (((((int(accessor((index1 - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
									HX_STACK_LINE(86)
									hx::SubEq(index1,(int)4);
								}
								else{
									HX_STACK_LINE(86)
									hx::SubEq(index1,(int)1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(86)
				++(count);
			}
			HX_STACK_LINE(86)
			si = index1;
		}
	}
	HX_STACK_LINE(89)
	int ei;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(89)
	if (((length == null()))){
		HX_STACK_LINE(89)
		ei = s.length;
	}
	else{
		HX_STACK_LINE(90)
		if (((length < (int)0))){
			HX_STACK_LINE(90)
			ei = si;
		}
		else{
			HX_STACK_LINE(91)
			int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
			HX_STACK_LINE(91)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(91)
			if (((codePointOffset >= (int)0))){
				HX_STACK_LINE(91)
				int index = si;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(91)
				int len = u->str.length;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(91)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(91)
				while(((bool((i < codePointOffset)) && bool((index < len))))){
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(91)
						if (((c < (int)192))){
							HX_STACK_LINE(91)
							hx::AddEq(index,(int)1);
						}
						else{
							HX_STACK_LINE(91)
							if (((c < (int)224))){
								HX_STACK_LINE(91)
								hx::AddEq(index,(int)2);
							}
							else{
								HX_STACK_LINE(91)
								if (((c < (int)240))){
									HX_STACK_LINE(91)
									hx::AddEq(index,(int)3);
								}
								else{
									HX_STACK_LINE(91)
									if (((c < (int)248))){
										HX_STACK_LINE(91)
										hx::AddEq(index,(int)4);
									}
									else{
										HX_STACK_LINE(91)
										hx::AddEq(index,(int)1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(91)
					++(i);
				}
				HX_STACK_LINE(91)
				ei = index;
			}
			else{
				HX_STACK_LINE(91)
				int index = si;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(91)
				int count = (int)0;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(91)
				while(((bool((count < -(codePointOffset))) && bool(((int)0 < index))))){
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
						HX_STACK_LINE(91)
						int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(91)
						if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
							HX_STACK_LINE(91)
							hx::SubEq(index,(int)1);
						}
						else{
							HX_STACK_LINE(91)
							if (((((int(accessor((index - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
								HX_STACK_LINE(91)
								hx::SubEq(index,(int)2);
							}
							else{
								HX_STACK_LINE(91)
								if (((((int(accessor((index - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
									HX_STACK_LINE(91)
									hx::SubEq(index,(int)3);
								}
								else{
									HX_STACK_LINE(91)
									if (((((int(accessor((index - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
										HX_STACK_LINE(91)
										hx::SubEq(index,(int)4);
									}
									else{
										HX_STACK_LINE(91)
										hx::SubEq(index,(int)1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(91)
					++(count);
				}
				HX_STACK_LINE(91)
				ei = index;
			}
		}
	}
	HX_STACK_LINE(92)
	return s.substring(si,ei);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uSubstr,return )

::String Unifill_obj::uSubstring( ::String s,int startIndex,Dynamic endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSubstring",0x8eba8347,"luxe.utils.unifill.Unifill.uSubstring","luxe/utils/unifill/Unifill.hx",100,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(101)
	int si;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(101)
	if (((startIndex < (int)0))){
		HX_STACK_LINE(101)
		si = (int)0;
	}
	else{
		HX_STACK_LINE(102)
		::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(102)
		if (((startIndex >= (int)0))){
			HX_STACK_LINE(102)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(102)
			int len = u->str.length;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(102)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(102)
			while(((bool((i < startIndex)) && bool((index < len))))){
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(102)
					if (((c < (int)192))){
						HX_STACK_LINE(102)
						hx::AddEq(index,(int)1);
					}
					else{
						HX_STACK_LINE(102)
						if (((c < (int)224))){
							HX_STACK_LINE(102)
							hx::AddEq(index,(int)2);
						}
						else{
							HX_STACK_LINE(102)
							if (((c < (int)240))){
								HX_STACK_LINE(102)
								hx::AddEq(index,(int)3);
							}
							else{
								HX_STACK_LINE(102)
								if (((c < (int)248))){
									HX_STACK_LINE(102)
									hx::AddEq(index,(int)4);
								}
								else{
									HX_STACK_LINE(102)
									hx::AddEq(index,(int)1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(102)
				++(i);
			}
			HX_STACK_LINE(102)
			si = index;
		}
		else{
			HX_STACK_LINE(102)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(102)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(102)
			while(((bool((count < -(startIndex))) && bool(((int)0 < index))))){
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
					HX_STACK_LINE(102)
					int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(102)
					if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
						HX_STACK_LINE(102)
						hx::SubEq(index,(int)1);
					}
					else{
						HX_STACK_LINE(102)
						if (((((int(accessor((index - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
							HX_STACK_LINE(102)
							hx::SubEq(index,(int)2);
						}
						else{
							HX_STACK_LINE(102)
							if (((((int(accessor((index - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
								HX_STACK_LINE(102)
								hx::SubEq(index,(int)3);
							}
							else{
								HX_STACK_LINE(102)
								if (((((int(accessor((index - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
									HX_STACK_LINE(102)
									hx::SubEq(index,(int)4);
								}
								else{
									HX_STACK_LINE(102)
									hx::SubEq(index,(int)1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(102)
				++(count);
			}
			HX_STACK_LINE(102)
			si = index;
		}
	}
	HX_STACK_LINE(103)
	int ei;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(103)
	if (((endIndex == null()))){
		HX_STACK_LINE(103)
		ei = s.length;
	}
	else{
		HX_STACK_LINE(104)
		if (((endIndex < (int)0))){
			HX_STACK_LINE(104)
			ei = (int)0;
		}
		else{
			HX_STACK_LINE(105)
			int codePointOffset = endIndex;		HX_STACK_VAR(codePointOffset,"codePointOffset");
			HX_STACK_LINE(105)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(105)
			if (((codePointOffset >= (int)0))){
				HX_STACK_LINE(105)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(105)
				int len = u->str.length;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(105)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(105)
				while(((bool((i < codePointOffset)) && bool((index < len))))){
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						int c = u->str.cca(index);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(105)
						if (((c < (int)192))){
							HX_STACK_LINE(105)
							hx::AddEq(index,(int)1);
						}
						else{
							HX_STACK_LINE(105)
							if (((c < (int)224))){
								HX_STACK_LINE(105)
								hx::AddEq(index,(int)2);
							}
							else{
								HX_STACK_LINE(105)
								if (((c < (int)240))){
									HX_STACK_LINE(105)
									hx::AddEq(index,(int)3);
								}
								else{
									HX_STACK_LINE(105)
									if (((c < (int)248))){
										HX_STACK_LINE(105)
										hx::AddEq(index,(int)4);
									}
									else{
										HX_STACK_LINE(105)
										hx::AddEq(index,(int)1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(105)
					++(i);
				}
				HX_STACK_LINE(105)
				ei = index;
			}
			else{
				HX_STACK_LINE(105)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(105)
				int count = (int)0;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(105)
				while(((bool((count < -(codePointOffset))) && bool(((int)0 < index))))){
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
						HX_STACK_LINE(105)
						int c1 = accessor((index - (int)1)).Cast< int >();		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(105)
						if (((bool((c1 < (int)128)) || bool((c1 >= (int)192))))){
							HX_STACK_LINE(105)
							hx::SubEq(index,(int)1);
						}
						else{
							HX_STACK_LINE(105)
							if (((((int(accessor((index - (int)2)).Cast< int >()) & int((int)224))) == (int)192))){
								HX_STACK_LINE(105)
								hx::SubEq(index,(int)2);
							}
							else{
								HX_STACK_LINE(105)
								if (((((int(accessor((index - (int)3)).Cast< int >()) & int((int)240))) == (int)224))){
									HX_STACK_LINE(105)
									hx::SubEq(index,(int)3);
								}
								else{
									HX_STACK_LINE(105)
									if (((((int(accessor((index - (int)4)).Cast< int >()) & int((int)248))) == (int)240))){
										HX_STACK_LINE(105)
										hx::SubEq(index,(int)4);
									}
									else{
										HX_STACK_LINE(105)
										hx::SubEq(index,(int)1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(105)
					++(count);
				}
				HX_STACK_LINE(105)
				ei = index;
			}
		}
	}
	HX_STACK_LINE(106)
	return s.substring(si,ei);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uSubstring,return )

Dynamic Unifill_obj::uIterator( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uIterator",0x945f89b8,"luxe.utils.unifill.Unifill.uIterator","luxe/utils/unifill/Unifill.hx",113,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(113)
	return ::luxe::utils::unifill::CodePointIter_obj::__new(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uIterator,return )

int Unifill_obj::uCompare( ::String a,::String b){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCompare",0x30c2601b,"luxe.utils.unifill.Unifill.uCompare","luxe/utils/unifill/Unifill.hx",119,0x52105abe)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(120)
	::String aiter_string = a;		HX_STACK_VAR(aiter_string,"aiter_string");
	HX_STACK_LINE(120)
	int aiter_index = (int)0;		HX_STACK_VAR(aiter_index,"aiter_index");
	HX_STACK_LINE(120)
	int aiter_endIndex = a.length;		HX_STACK_VAR(aiter_endIndex,"aiter_endIndex");
	HX_STACK_LINE(121)
	::String biter_string = b;		HX_STACK_VAR(biter_string,"biter_string");
	HX_STACK_LINE(121)
	int biter_index = (int)0;		HX_STACK_VAR(biter_index,"biter_index");
	HX_STACK_LINE(121)
	int biter_endIndex = b.length;		HX_STACK_VAR(biter_endIndex,"biter_endIndex");
	HX_STACK_LINE(122)
	while(((bool((aiter_index < aiter_endIndex)) && bool((biter_index < biter_endIndex))))){
		HX_STACK_LINE(123)
		int acode;		HX_STACK_VAR(acode,"acode");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int i = aiter_index;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					::String u_str = aiter_string;		HX_STACK_VAR(u_str,"u_str");
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						int c = u_str.cca(aiter_index);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(123)
						if (((c < (int)192))){
							HX_STACK_LINE(123)
							hx::AddEq(aiter_index,(int)1);
						}
						else{
							HX_STACK_LINE(123)
							if (((c < (int)224))){
								HX_STACK_LINE(123)
								hx::AddEq(aiter_index,(int)2);
							}
							else{
								HX_STACK_LINE(123)
								if (((c < (int)240))){
									HX_STACK_LINE(123)
									hx::AddEq(aiter_index,(int)3);
								}
								else{
									HX_STACK_LINE(123)
									if (((c < (int)248))){
										HX_STACK_LINE(123)
										hx::AddEq(aiter_index,(int)4);
									}
									else{
										HX_STACK_LINE(123)
										hx::AddEq(aiter_index,(int)1);
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(123)
				index = i;
			}
			HX_STACK_LINE(123)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(a);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(123)
			acode = u->codePointAt(index);
		}
		HX_STACK_LINE(124)
		int bcode;		HX_STACK_VAR(bcode,"bcode");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				int i = biter_index;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					::String u_str = biter_string;		HX_STACK_VAR(u_str,"u_str");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						int c = u_str.cca(biter_index);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(124)
						if (((c < (int)192))){
							HX_STACK_LINE(124)
							hx::AddEq(biter_index,(int)1);
						}
						else{
							HX_STACK_LINE(124)
							if (((c < (int)224))){
								HX_STACK_LINE(124)
								hx::AddEq(biter_index,(int)2);
							}
							else{
								HX_STACK_LINE(124)
								if (((c < (int)240))){
									HX_STACK_LINE(124)
									hx::AddEq(biter_index,(int)3);
								}
								else{
									HX_STACK_LINE(124)
									if (((c < (int)248))){
										HX_STACK_LINE(124)
										hx::AddEq(biter_index,(int)4);
									}
									else{
										HX_STACK_LINE(124)
										hx::AddEq(biter_index,(int)1);
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(124)
				index = i;
			}
			HX_STACK_LINE(124)
			::luxe::utils::unifill::Utf8 u = ::luxe::utils::unifill::Utf8_obj::__new(b);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(124)
			bcode = u->codePointAt(index);
		}
		HX_STACK_LINE(125)
		if (((acode < bcode))){
			HX_STACK_LINE(126)
			return (int)-1;
		}
		HX_STACK_LINE(127)
		if (((acode > bcode))){
			HX_STACK_LINE(128)
			return (int)1;
		}
	}
	HX_STACK_LINE(130)
	if (((biter_index < biter_endIndex))){
		HX_STACK_LINE(131)
		return (int)-1;
	}
	HX_STACK_LINE(132)
	if (((aiter_index < aiter_endIndex))){
		HX_STACK_LINE(133)
		return (int)1;
	}
	HX_STACK_LINE(134)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCompare,return )

::String Unifill_obj::uToString( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uToString",0x39341076,"luxe.utils.unifill.Unifill.uToString","luxe/utils/unifill/Unifill.hx",141,0x52105abe)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(141)
	::luxe::utils::unifill::Utf8 _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::haxe::io::BytesBuffer buf = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(141)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(codePoints->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			int c = __it->next();
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(buf->addByte_dyn(),c);
		}
		struct _Function_2_1{
			inline static ::String Block( ::haxe::io::BytesBuffer &buf){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",141,0x52105abe)
				{
					HX_STACK_LINE(141)
					::haxe::io::Bytes b = buf->getBytes();		HX_STACK_VAR(b,"b");
					struct _Function_3_1{
						inline static ::String Block( ::haxe::io::Bytes &b){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/unifill/Unifill.hx",141,0x52105abe)
							{
								HX_STACK_LINE(141)
								::String s = b->toString();		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(141)
								return s;
							}
							return null();
						}
					};
					HX_STACK_LINE(141)
					return _Function_3_1::Block(b);
				}
				return null();
			}
		};
		HX_STACK_LINE(141)
		_this = ::luxe::utils::unifill::Utf8_obj::__new(_Function_2_1::Block(buf));
	}
	HX_STACK_LINE(141)
	return _this->str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uToString,return )


Unifill_obj::Unifill_obj()
{
}

Dynamic Unifill_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uSplit") ) { return uSplit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uLength") ) { return uLength_dyn(); }
		if (HX_FIELD_EQ(inName,"uCharAt") ) { return uCharAt_dyn(); }
		if (HX_FIELD_EQ(inName,"uSubstr") ) { return uSubstr_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uIndexOf") ) { return uIndexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"uCompare") ) { return uCompare_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uIterator") ) { return uIterator_dyn(); }
		if (HX_FIELD_EQ(inName,"uToString") ) { return uToString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uSubstring") ) { return uSubstring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uCharCodeAt") ) { return uCharCodeAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uCodePointAt") ) { return uCodePointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"uLastIndexOf") ) { return uLastIndexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Unifill_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Unifill_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("uLength"),
	HX_CSTRING("uCharAt"),
	HX_CSTRING("uCharCodeAt"),
	HX_CSTRING("uCodePointAt"),
	HX_CSTRING("uIndexOf"),
	HX_CSTRING("uLastIndexOf"),
	HX_CSTRING("uSplit"),
	HX_CSTRING("uSubstr"),
	HX_CSTRING("uSubstring"),
	HX_CSTRING("uIterator"),
	HX_CSTRING("uCompare"),
	HX_CSTRING("uToString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unifill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unifill_obj::__mClass,"__mClass");
};

#endif

Class Unifill_obj::__mClass;

void Unifill_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.unifill.Unifill"), hx::TCanCast< Unifill_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Unifill_obj::__boot()
{
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
