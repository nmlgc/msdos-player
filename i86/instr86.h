#pragma once

#ifndef __INSTR86_H__
#define __INSTR86_H__

/****************************************************************************
*             real mode i286 emulator v1.4 by Fabrice Frances               *
*               (initial work based on David Hedley's pcemu)                *
****************************************************************************/

// file will be included in all cpu variants
// put non i86 instructions in own files (i286, i386, nec)
// function renaming will be added when necessary
// timing value should move to separate array

static void PREFIX86(_add_br8)();
static void PREFIX86(_add_wr16)();
static void PREFIX86(_add_r8b)();
static void PREFIX86(_add_r16w)();
static void PREFIX86(_add_ald8)();
static void PREFIX86(_add_axd16)();
static void PREFIX86(_push_es)();
static void PREFIX86(_pop_es)();
static void PREFIX86(_or_br8)();
static void PREFIX86(_or_r8b)();
static void PREFIX86(_or_wr16)();
static void PREFIX86(_or_r16w)();
static void PREFIX86(_or_ald8)();
static void PREFIX86(_or_axd16)();
static void PREFIX86(_push_cs)();
#ifndef I80286
static void PREFIX86(_pop_cs)();
#endif
static void PREFIX86(_adc_br8)();
static void PREFIX86(_adc_wr16)();
static void PREFIX86(_adc_r8b)();
static void PREFIX86(_adc_r16w)();
static void PREFIX86(_adc_ald8)();
static void PREFIX86(_adc_axd16)();
static void PREFIX86(_push_ss)();
static void PREFIX86(_pop_ss)();
static void PREFIX86(_sbb_br8)();
static void PREFIX86(_sbb_wr16)();
static void PREFIX86(_sbb_r8b)();
static void PREFIX86(_sbb_r16w)();
static void PREFIX86(_sbb_ald8)();
static void PREFIX86(_sbb_axd16)();
static void PREFIX86(_push_ds)();
static void PREFIX86(_pop_ds)();
static void PREFIX86(_and_br8)();
static void PREFIX86(_and_r8b)();
static void PREFIX86(_and_wr16)();
static void PREFIX86(_and_r16w)();
static void PREFIX86(_and_ald8)();
static void PREFIX86(_and_axd16)();
static void PREFIX86(_es)();
static void PREFIX86(_daa)();
static void PREFIX86(_sub_br8)();
static void PREFIX86(_sub_wr16)();
static void PREFIX86(_sub_r8b)();
static void PREFIX86(_sub_r16w)();
static void PREFIX86(_sub_ald8)();
static void PREFIX86(_sub_axd16)();
static void PREFIX86(_cs)();
static void PREFIX86(_das)();
static void PREFIX86(_xor_br8)();
static void PREFIX86(_xor_r8b)();
static void PREFIX86(_xor_wr16)();
static void PREFIX86(_xor_r16w)();
static void PREFIX86(_xor_ald8)();
static void PREFIX86(_xor_axd16)();
static void PREFIX86(_ss)();
static void PREFIX86(_aaa)();
static void PREFIX86(_cmp_br8)();
static void PREFIX86(_cmp_wr16)();
static void PREFIX86(_cmp_r8b)();
static void PREFIX86(_cmp_r16w)();
static void PREFIX86(_cmp_ald8)();
static void PREFIX86(_cmp_axd16)();
static void PREFIX86(_ds)();
static void PREFIX86(_aas)();
static void PREFIX86(_inc_ax)();
static void PREFIX86(_inc_cx)();
static void PREFIX86(_inc_dx)();
static void PREFIX86(_inc_bx)();
static void PREFIX86(_inc_sp)();
static void PREFIX86(_inc_bp)();
static void PREFIX86(_inc_si)();
static void PREFIX86(_inc_di)();
static void PREFIX86(_dec_ax)();
static void PREFIX86(_dec_cx)();
static void PREFIX86(_dec_dx)();
static void PREFIX86(_dec_bx)();
static void PREFIX86(_dec_sp)();
static void PREFIX86(_dec_bp)();
static void PREFIX86(_dec_si)();
static void PREFIX86(_dec_di)();
static void PREFIX86(_push_ax)();
static void PREFIX86(_push_cx)();
static void PREFIX86(_push_dx)();
static void PREFIX86(_push_bx)();
static void PREFIX86(_push_sp)();
static void PREFIX86(_push_bp)();
static void PREFIX86(_push_si)();
static void PREFIX86(_push_di)();
static void PREFIX86(_pop_ax)();
static void PREFIX86(_pop_cx)();
static void PREFIX86(_pop_dx)();
static void PREFIX86(_pop_bx)();
static void PREFIX86(_pop_sp)();
static void PREFIX86(_pop_bp)();
static void PREFIX86(_pop_si)();
static void PREFIX86(_pop_di)();
static void PREFIX86(_jo)();
static void PREFIX86(_jno)();
static void PREFIX86(_jb)();
static void PREFIX86(_jnb)();
static void PREFIX86(_jz)();
static void PREFIX86(_jnz)();
static void PREFIX86(_jbe)();
static void PREFIX86(_jnbe)();
static void PREFIX86(_js)();
static void PREFIX86(_jns)();
static void PREFIX86(_jp)();
static void PREFIX86(_jnp)();
static void PREFIX86(_jl)();
static void PREFIX86(_jnl)();
static void PREFIX86(_jle)();
static void PREFIX86(_jnle)();
static void PREFIX86(_80pre)();
static void PREFIX86(_82pre)();
static void PREFIX86(_81pre)();
static void PREFIX86(_83pre)();
static void PREFIX86(_test_br8)();
static void PREFIX86(_test_wr16)();
static void PREFIX86(_xchg_br8)();
static void PREFIX86(_xchg_wr16)();
static void PREFIX86(_mov_br8)();
static void PREFIX86(_mov_r8b)();
static void PREFIX86(_mov_wr16)();
static void PREFIX86(_mov_r16w)();
static void PREFIX86(_mov_wsreg)();
static void PREFIX86(_lea)();
static void PREFIX86(_mov_sregw)();
static void PREFIX86(_invalid)();
#ifndef I80286
static void PREFIX86(_invalid_2b)();
#endif
static void PREFIX86(_popw)();
static void PREFIX86(_nop)();
static void PREFIX86(_xchg_axcx)();
static void PREFIX86(_xchg_axdx)();
static void PREFIX86(_xchg_axbx)();
static void PREFIX86(_xchg_axsp)();
static void PREFIX86(_xchg_axbp)();
static void PREFIX86(_xchg_axsi)();
static void PREFIX86(_xchg_axdi)();
static void PREFIX86(_cbw)();
static void PREFIX86(_cwd)();
static void PREFIX86(_call_far)();
static void PREFIX86(_pushf)();
static void PREFIX86(_popf)();
static void PREFIX86(_sahf)();
static void PREFIX86(_lahf)();
static void PREFIX86(_mov_aldisp)();
static void PREFIX86(_mov_axdisp)();
static void PREFIX86(_mov_dispal)();
static void PREFIX86(_mov_dispax)();
static void PREFIX86(_movsb)();
static void PREFIX86(_movsw)();
static void PREFIX86(_cmpsb)();
static void PREFIX86(_cmpsw)();
static void PREFIX86(_test_ald8)();
static void PREFIX86(_test_axd16)();
static void PREFIX86(_stosb)();
static void PREFIX86(_stosw)();
static void PREFIX86(_lodsb)();
static void PREFIX86(_lodsw)();
static void PREFIX86(_scasb)();
static void PREFIX86(_scasw)();
static void PREFIX86(_mov_ald8)();
static void PREFIX86(_mov_cld8)();
static void PREFIX86(_mov_dld8)();
static void PREFIX86(_mov_bld8)();
static void PREFIX86(_mov_ahd8)();
static void PREFIX86(_mov_chd8)();
static void PREFIX86(_mov_dhd8)();
static void PREFIX86(_mov_bhd8)();
static void PREFIX86(_mov_axd16)();
static void PREFIX86(_mov_cxd16)();
static void PREFIX86(_mov_dxd16)();
static void PREFIX86(_mov_bxd16)();
static void PREFIX86(_mov_spd16)();
static void PREFIX86(_mov_bpd16)();
static void PREFIX86(_mov_sid16)();
static void PREFIX86(_mov_did16)();
static void PREFIX86(_ret_d16)();
static void PREFIX86(_ret)();
static void PREFIX86(_les_dw)();
static void PREFIX86(_lds_dw)();
static void PREFIX86(_mov_bd8)();
static void PREFIX86(_mov_wd16)();
static void PREFIX86(_retf_d16)();
static void PREFIX86(_retf)();
static void PREFIX86(_int3)();
static void PREFIX86(_int)();
static void PREFIX86(_into)();
static void PREFIX86(_iret)();
static void PREFIX86(_rotshft_b)();
static void PREFIX86(_rotshft_w)();
static void PREFIX86(_rotshft_bcl)();
static void PREFIX86(_rotshft_wcl)();
static void PREFIX86(_aam)();
static void PREFIX86(_aad)();
static void PREFIX86(_xlat)();
static void PREFIX86(_escape)();
static void PREFIX86(_loopne)();
static void PREFIX86(_loope)();
static void PREFIX86(_loop)();
static void PREFIX86(_jcxz)();
static void PREFIX86(_inal)();
static void PREFIX86(_inax)();
static void PREFIX86(_outal)();
static void PREFIX86(_outax)();
static void PREFIX86(_call_d16)();
static void PREFIX86(_jmp_d16)();
static void PREFIX86(_jmp_far)();
static void PREFIX86(_jmp_d8)();
static void PREFIX86(_inaldx)();
static void PREFIX86(_inaxdx)();
static void PREFIX86(_outdxal)();
static void PREFIX86(_outdxax)();
static void PREFIX86(_lock)();
static void PREFIX86(_repne)();
static void PREFIX86(_repe)();
static void PREFIX86(_hlt)();
static void PREFIX86(_cmc)();
static void PREFIX86(_f6pre)();
static void PREFIX86(_f7pre)();
static void PREFIX86(_clc)();
static void PREFIX86(_stc)();
static void PREFIX86(_cli)();
static void PREFIX86(_sti)();
static void PREFIX86(_cld)();
static void PREFIX86(_std)();
static void PREFIX86(_fepre)();
static void PREFIX86(_ffpre)();
static void PREFIX86(_wait)();

#endif /* __INSTR86_H__ */