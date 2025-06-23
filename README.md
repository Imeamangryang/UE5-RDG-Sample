# UE5‑RDG‑Sample 학습용 (Unreal Engine RDG 샘플 플러그인)

UE5에서 **Render Dependency Graph (RDG)** 기반의 간단한 렌더링/쉐이더 예제를 제공하는 **Unreal Engine 플러그인**입니다. 
RDG의 워크플로우를 플러그인 형태로 분리하여, 기존 엔진 코드를 수정하지 않고도 학습과 실험이 가능하도록 설계되었습니다.

---

## 🎯 주요 기능

- 플러그인(.uplugin) 형태로 간편하게 적용 가능  
- HLSL `.usf` 글로벌 쉐이더 포함  
- RDG 기반 커스텀 렌더 패스에서 간단한 삼각형 렌더링  
- FRDGBuilder 활용 (CreateTexture, AddPass 등)  
- 예제 코드 및 주석을 통해 흐름 이해 용이

---

## 🛠️ 설치 및 사용 방법

1. 해당 플러그인 폴더를 Unreal 프로젝트 내 `Plugins/` 디렉토리에 복사  
2. `.uproject` 열기 → Plugins 탭에서 **LearnShader, TriangleShader** 활성화  
3. 프로젝트 재시작 후 **Edit → Project Settings → Rendering → RDG Debug** 옵션을 확인 (필요 시 활성화)  