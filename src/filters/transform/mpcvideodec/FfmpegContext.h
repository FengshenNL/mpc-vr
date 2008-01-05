/* 
 * $Id: FfmpegContext.h 249 2007-09-26 11:07:22Z casimir666 $
 *
 * (C) 2006-2007 see AUTHORS
 *
 * This file is part of mplayerc.
 *
 * Mplayerc is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mplayerc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <dxva.h>

struct AVCodecContext;

void FFH264UpdatePictureParam (int bInit, DXVA_PicParams_H264* pDXVAPicParams, DXVA_Qmatrix_H264* pDXVAScalingMatrix, struct AVCodecContext* pAVCtx);
HRESULT  FFH264ReadSlideHeader (DXVA_PicParams_H264* pDXVAPicParams, struct AVCodecContext* pAVCtx, BYTE* pBuffer, UINT nSize);

void FillVC1Context	 (DXVA_PictureParameters* pPicParams,	struct AVCodecContext* pAVCtx);
